function Output = Stochastic_Volatility(ym, X, n0, n1, beta0, B0, gamma0, Gamma0, v0, d0,forecast,x_f,ML,d)
coder.extrinsic('format')
coder.extrinsic('clc')

n = n0 + n1;
if forecast == 'Y'
    isForecast = 1; %  �����ϱ�
else
    isForecast = 0;  % ���� ���ϱ�
end

[T, k] = size(X);

% �ʱⰪ �����ϱ�
mu_phi = gamma0;
sig2 = d0/v0;
sig2_inv = 1/sig2;
precb_ = inv(Gamma0);
precB0 = inv(B0);
b = beta0;
hm = zeros(T,1);
loglikelihood = 0 ;

hm = log((ym - X*beta0).*(ym - X*beta0));
vol = exp(hm/2);


% normal mixture�� �̿��� log(Chi-square(1))�� approximation
% ������ ���Ժ����� ���õ� Ȯ��
pm = zeros(7,1);
pm(1) = 0.00730;
pm(2) = 0.10556;
pm(3) = 0.00002;
pm(4) = 0.04395;
pm(5) = 0.34001;
pm(6) = 0.24566;
pm(7) = 0.25750;

% ���õ� ���Ժ����� ���
msm = zeros(7,1);
msm(1) = -11.40039;
msm(2) = -5.24321;
msm(3) = -9.83726;
msm(4) = 1.50746;
msm(5) = -0.65098;
msm(6) = 0.52478;
msm(7) = -2.35859;

% ���õ� ���Ժ����� �л�
vsm = zeros(7,1);
vsm(1) = 5.79596;
vsm(2) = 2.61369;
vsm(3) = 5.17950;
vsm(4) = 0.16735;
vsm(5) = 0.64009;
vsm(6) = 0.34023;
vsm(7) = 1.26261;


% MCMC output�� ������ ��
betam= zeros(n,k);
Hm =  zeros(n,T);
Sig2m = zeros(n,1);
mu_phim = zeros(n,rows(gamma0));
Volm =  zeros(n,T); % �������� exp��
% logLik = zeros(n,1);
Yfm = zeros(n,1);
% PredLikm = zeros(n,1);

b_hat = beta0;
mu_phi_hat = gamma0;
sig2_hat = d0/v0;
lnpost_hat = -exp(20);% ���Ƿ� ���� �ְ� ������

for iter = 1:n
    
    % report intermediate results
    
    [~, resid] = minresid(iter,100);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        disp('[beta: ]')
        disp(b')
        disp('[mu and phi: ]')
        disp(mu_phi')
        disp('[sig2: ]')
        disp(sig2)
    end
    
    %  Step 0 : beta sampling
    b = Gen_beta(X, ym, beta0, precB0, vol);
    betam(iter,:) = b';
    
    %  Step 1 : mu�� phi sammpling
    [mu_phi,Xh,Yh] = Gen_mu_phi(hm,gamma0,precb_,sig2_inv,mu_phi);
    mu_phim(iter,:) = mu_phi'; % mu�� phi �����ϱ�
    
    %  Step 2 : ht�� ���Ǻ� �л�
    [sig2_inv, sig2] = Gen_Sigma(Xh,Yh,v0,d0,mu_phi,d);
    Sig2m(iter,1) = sig2;
    
    ysm = log((ym - X*b).*(ym - X*b)); % ������ ���Ӻ���
    
    %  Step 3 : Sampling sm
    sm = Gen_Sm(ysm,hm,pm,msm,vsm);
    
    %  Step 4 : Sampling hm
    [hm, loglikelihood] = Gen_Fm(ysm,mu_phi,sig2,sm,msm,vsm);
    Hm(iter,:) = hm(:, 1)';
%     logLik(iter,:) = loglikelihood;
    
    vol = exp(hm/2); % volatility
    Volm(iter,:) = vol(:, 1)'; % volatility �����ϱ�
    if isForecast == 1
        %  ����
        [y_pred, lnpredlik] = Gen_Forecast(x_f, b, mu_phi, sig2, ym, hm); %#ok<ASGLU>
        Yfm(iter) = y_pred;
        %         PredLikm(iter) = exp(lnpredlik);
    end

    if ML == 'Y' && iter > n0
        
        lnlik1 = loglikelihood;
        b_prior = lnpdfmvn(b,beta0,B0);
        mu_phi_prior = lnpdfmvn(mu_phi,gamma0,Gamma0);
        sig2_prior = lnpdfig(sig2,v0/2,d0/2);
        lnprior1 = b_prior+mu_phi_prior+sig2_prior;
        lnpost1 = lnlik1 + lnprior1;
        
        if lnpost1 > lnpost_hat
            b_hat = b;
            mu_phi_hat = mu_phi;
            sig2_hat = sig2;
            lnpost_hat = lnpost1; % �ֺ� �ĺ��� ���� Ŀ�ΰ�
        end      
    end
end
disp(' ')
disp('Organizing the results. Please wait...')
disp(' ')
%% Summary of Output

mu_phim = mu_phim(n0+1:n,:);
Sig2m = Sig2m(n0+1:n,:);
betam = betam(n0+1:n,:);
Hm = Hm(n0+1:n,:);
if isForecast ==1
    Yfm = Yfm(n0+1:n, :);
    %     PredLikm = PredLikm(n0+1:n, :);   % ���� ������
    %     predlik = meanc(PredLikm);
end
Volm = Volm(n0+1:n,:);

lnML = 0;
if ML == 'Y'        
    MHm = [betam mu_phim Sig2m];
    
    postmean = meanc(MHm);
    postvarcov = .5*(cov(MHm) + cov(MHm)');
    ln_joint_post = lnpdfmvn([b_hat;mu_phi_hat;sig2_hat],postmean,postvarcov);
    
    lnML = lnpost_hat - ln_joint_post;
end
Output.Yfm = Yfm;
Output.Hm = Hm;
Output.betam = betam;
Output.gammam = mu_phim;
Output.Sig2m = Sig2m;
Output.lnML = lnML;
Output.Volm = Volm;


end

%% State ���ø� %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function sm = Gen_Sm(ysm,hm,pm,msm,vsm)

T = rows(ysm);
sm = zeros(T,1);

for t = 1:T
    
    fm = zeros(7,1); % �̻�Ȯ������ s(t)�� 7���� kernel ���� �����ϴ� ��
    
    for i = 1:rows(pm)
        y_tl = msm(i) + hm(t);  % ystm(t)�� ���Ǻ� ��밪
        ft = lnpdfn(ysm(t),y_tl,vsm(i)) + log(pm(i));
        fm(i) = exp(ft);
    end
    
    prb_st = fm/(sum(fm)); % st�� ���� Ȯ��
    sm(t) = discret1(prb_st,1);
    
end

end



%% Sigma ���ø� %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function [sig2_inv,sig2] = Gen_Sigma(X,Y,v_,d_,mu_phi,d)

T = rows(Y);

ehat = Y - X*mu_phi; % ������
v1 = v_ + T;
d1 = d_ + d*(ehat'*ehat);
sig2 = randig(v1/2,d1/2,1,1);
sig2 = sig2(1,1)/d;
sig2_inv = 1/sig2;


end

%% mu�� phi ���ø� %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [mu_phi,X,Y] = Gen_mu_phi(hm,b_,precb_,sig2_inv,mu_phi0)

p = rows(mu_phi0)-1;
hm = hm(:, 1);
Y = hm(p+1:end);

X = ones(rows(Y),1);
for i = 1:p
    X = [X hm((p+1)-i:end-i,1)]; %#ok<*AGROW> % AR(1)
end

k = cols(X);
XX = X'*X;
XY = X'*Y;

varb1 = invpd(precb_ + sig2_inv*XX);  % full conditional variance
b1 = varb1*(precb_*b_ + sig2_inv*XY); % full conditional mean

mu_phi = b1 + chol(varb1)'*randn(k,1); % beta sampling �ϱ�

F = [mu_phi(2:end,1)'; eye(p-1) zeros(p-1,1)];
test = eig(F);
imagine = imag(test).^2;
absolute = abs(test).^2;
test = sqrt(absolute + imagine)<1;
if min(test) == 0 
    mu_phi = mu_phi0;
end

end


%% �������� ���ø� %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [y_pred, lnpredlik] = Gen_Forecast(xf, beta, mu_phi, sig2, ym, hm)

T = rows(ym);
p = rows(mu_phi)-1;

hL = hm(T:-1:T-p+1, 1); % ������ ���� h(t)
hf = mu_phi(1,1) + mu_phi(2:end,1)'*hL + sqrt(sig2)*randn(1,1); % �����⿡ ����Ǵ� h(t)

volf = exp(hf/2); % �������� ����Ǵ� ������
y_pred = xf'*beta + volf*randn(1,1); % �����⿡ ����Ǵ� y-value

lnpredlik = lnpdfn(y_pred, xf'*beta, volf^2);

end


%% Fm ���÷� %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [Fm, loglikelihood] = Gen_Fm(ysm,mu_phi,sig2,sm,msm,vsm)

T = rows(ysm);
p = rows(mu_phi) - 1;
G = zeros(1,p);
G(1,1) = 1;
C = zeros(p,1);
C(1,1) = mu_phi(1,1);
Phi = [mu_phi(2:end,1)'; eye(p-1) zeros(p-1,1)];
Sigma = [sig2 zeros(1,p-1) ; zeros(p-1,1) zeros(p-1,p-1)];

%%%%% Kalman filtering step
f_ttm = zeros(T,p); % �������ڸ� ����
P_ttm = zeros(T,p^2); % ���������� �л��� ����
likelihood = zeros(T,1);
f_ll = inv(eye(p) - Phi)*C; % �ʱⰪ�� �����Ǻ� ���
P_ll = reshape(inv(eye(p^2)-kron(Phi,Phi))*vec(Sigma),p,p); %#ok<*MINV>

for t = 1:T
    
    st = sm(t); % t���� ���º���
    f_tl = C + Phi*f_ll;
    P_tl = Phi*P_ll*Phi' + Sigma;
    
    var_tl = G*P_tl*G' +  vsm(st);
    var_tl = .5*(var_tl+var_tl');
    var_tlinv = inv(var_tl);
    mean_tl = msm(st) + G*f_tl;
    lnmvn = lnpdfmvn(ysm(t),mean_tl,var_tl);
    likelihood(t,1) = lnmvn(1,1);
    
    e_tl = ysm(t) - mean_tl;
    Kalgain = P_tl*G'*var_tlinv; % ��ȯ�� ���Ӻ����� ���� Gamma�� �������
    f_tt = f_tl + Kalgain*e_tl;
    P_tt = P_tl - Kalgain*G*P_tl;
    
    f_ttm(t,:) = f_tt';
    vec_P_tt = vec(P_tt)';
    P_ttm(t,:) = vec_P_tt(1,:);
    
    f_ll = f_tt;
    P_ll = P_tt;
    
end

loglikelihood = sum(likelihood);

%%% Backward recursion
Fm = zeros(T,p);  % T by km ���ø��� ������ �����ϴ� ����

P_tt = reshape(P_ttm(T,:)',p,p);  % km by km �ʱⰪ���� ������ ����ġ
P_tt = (P_tt + P_tt')/2;
cP_tt = cholmod(P_tt); % km by km

f_tt = f_ttm(T,:)'; % km by 1
ft = f_tt + cP_tt'*randn(p,1);  % km by 1
Fm(T,:) = ft'; % 1 by by km ������ ���� �������ڸ� sampling
t = T - 1; %  time index

while t >= 1
    
    f_tt = f_ttm(t,:)';  % km3 by 1
    P_tt = reshape(P_ttm(t,:)',p,p);  % km3 by km3
    
    GPG_Q = Phi*P_tt*Phi' + Sigma; % km by km
    GPG_Qinv = inv(GPG_Q); % km by km
    
    e_tl = Fm(t+1,:)' - C - Phi*f_tt; % km by 1
    
    PGG = P_tt*Phi'*GPG_Qinv;  % km3 by km
    f_tt1 = f_tt + PGG*e_tl;  % km3 by 1
    
    PGP = PGG*Phi*P_tt;  % km3 by km3
    P_tt1 = P_tt - PGP;
    
    P_tt1 = (P_tt1 + P_tt1')/2;
    cP_tt1 = cholmod(P_tt1);
    
    ft = f_tt1 + cP_tt1'*randn(p,1);
    Fm(t,:) = ft'; % 1 by by km
    
    t = t - 1;
end
Fm = Fm(:,1);
end

%% Beta sampling

function beta = Gen_beta(X, Y, beta0, precB0, vol)

% �̺л� ������ ���л� �������� ��ȯ
Y = Y./vol;
for i = 1:rows(X)
X(i,:) = X(i,:)/vol(i,1);
end
k = cols(X);

B1 = inv(X'*X + precB0);
A = X'*Y + precB0*beta0;

var = B1;
mean = B1*A;

beta = mean + chol(var)'*randn(k,1);

end