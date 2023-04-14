function Output = Structure_BVAR(Y,p,n0,n1,mlag,nu,R0,b_,var_,ML,restriction,resindex,ind_chol)

coder.extrinsic('format')
coder.extrinsic('clc')
% coder.extrinsic('eval')

format shortG

k = cols(Y); % ������ ����
pkk = p*k*k; % ��� ������ ���� ����� �������� ���� ȸ�Ͱ���� �� ����
n = n0 + n1;

% sig2 = zeros(k,1);
% B = zeros(k,k);
Gamma = zeros(k,p*k);
% normalize = zeros(k,(p+2)*k+1);
Omega0 = inv(R0*nu);  % Note that E(inv(Omega)=precision matrix) = nu*R0
Omega = Omega0;
Phi = reshape(b_, p*k, k); % F����� 1�� Block�� ��ġ
% F = [Phi' ; eye((p-1)*k), zeros(k*(p-1),k)];
% beta = b_;
Omega_inv = invpd(Omega0); % ����� �������� ���� �л������ �ʱⰪ�� �����
BinvT = zeros(k,k);
chol_Omega0 = chol(Omega0);
for i = 1:k
    BinvT(i,:) = chol_Omega0(i,:)*ind_chol(i,1);
end
Binv = BinvT';

% ����� �������� �������� precision matrix(���л������ �����)�� ��������� �ʱⰪ���� �� ��

% ��ݹ����Լ��� ������ ��
ImpulseRespm = zeros(n1,mlag+1,k^2); % (iter,j,1)�� ���� 1�� ����1�� j�� ���� ��ġ�� ����
decomm = zeros(n1,mlag+1,k^2);

% ����� ��������� ������ ��
Bm = zeros(n1,k^2);
Gammam = zeros(n1,pkk);
% sig2m = zeros(n1,k);
betam = zeros(n1,pkk);
Omegam = zeros(n1,k^2);

%% ���ĺ��� �����ϱ�
[Y0,YLm] = makeYX(Y,p); % ���Ӻ���(Y0)�� ������(YLm) �����
T = rows(Y0);

beta_hat = b_;
Omega_hat = Omega0;
lnpost_hat = -exp(20); % ���Ƿ� ���� �ְ� ������
lnlik1 = 0;

for iter = 1:n
    if restriction == 3
        iterlength = 1;
    else
        iterlength = 100;
    end
    [~, resid] = minresid(iter,iterlength);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        disp('[phi(1) phi(2) ... phi(p)] = ')
        disp(Phi')
        disp('Omega: ')
        disp(Omega)
        disp('B inverse: ')
        disp(Binv)
    end
    
    % Phi sampling �ϱ�
    [Phi,Fm,beta] = Gen_Phi(Y0,YLm,Phi,p,b_,var_,Omega_inv);
    
    % Omega sampling �ϱ�
    [Omega,Omega_inv] = Gen_Omega(Y0,YLm,beta,nu,R0);
    
    % ��ݹ����Լ� ����ؼ� �����ϱ�
    
    if iter > n0 % burn - in�� ����� ����
        [ImpulseRespm,Binv,decomm] = Gen_ImRes(Omega,Fm,mlag,n0,ImpulseRespm,iter,decomm,restriction,Binv,resindex,T,ind_chol);
        % ���� ������ sampling�ϱ�
        Phi_sp = Phi'; % ����� ���� �������� 1�������� p�������� ���������� ������
        B = inv(Binv);
        for idx = 1:p
            Gamma(:,(idx - 1)*k + 1:idx*k) = B*Phi_sp(:,(idx - 1)*k + 1:idx*k); %#ok<MINV>
            % ������ ���� �������� 1�������� p�������� ���������� ������
        end
        vec_B = vec(B)';
        Bm(iter-n0,:) = vec_B(1,:);
        vec_Gamma = vec(Gamma)';
        Gammam(iter-n0,:) = vec_Gamma(1,:);
        betam(iter-n0,:) = beta';
        vec_Omega = vec(Omega)';
        Omegam(iter-n0,:) = vec_Omega(1,:);
    end

    if ML == 'Y' && iter > n0
        for i = 1:rows(Y0) %#ok<*FXUP>
            lnlik1 = lnlik1 + lnpdfmvn(Y0(i,:)',YLm(:,:,i)*beta, Omega);
        end
        beta_prior = lnpdfmvn(beta,b_,var_);
        Omega_prior = lnpdfwishart(inv(Omega),R0,nu);
        lnprior1 = beta_prior+Omega_prior; % ���� �����е��Լ���
        lnpost1 = lnlik1 + lnprior1; % �ش� �Ķ������ ���� Ŀ�ΰ�
        if lnpost1 > lnpost_hat
            beta_hat = beta;
            Omega_hat = Omega;
            lnpost_hat = lnpost1; % �ֺ� �ĺ��� �����е��Լ���
        end    
    end
end
disp(' ')
disp('Organizing the results. Please wait...')
disp(' ')

lnML = 0;

if ML == 'Y'
    MHm = [betam Omegam];
    
    postmean = meanc(MHm);
    postvarcov = .5*(cov(MHm) + cov(MHm)');
    ln_joint_post = lnpdfmvn([beta_hat;vec(Omega_hat)],postmean,postvarcov);
    
    lnML = lnpost_hat - ln_joint_post;
end

Output.Bm = Bm;
Output.Gammam = Gammam;
Output.ImpulseRespm = ImpulseRespm;
Output.decomm = decomm;
Output.lnML = lnML;

end

%% ����, ������ ����� %%%%%%%%%%%%%%%%%%%%%%%%%%
function [Y0,YLm,YL,Y0_mean,YL_mean] = makeYX(Y,p)

k = cols(Y); % ������ ��
T = rows(Y); % �ð迭�� ũ��

Y0 = Y(p+1:T,:); % ���Ӻ���
Y0_mean = meanc(Y0);
Y0 = demeanc(Y0);
% ������(=Y�� ���Ű�) �����
YL = zeros(T-p,p*k);
for i = 1:p
    YL(:,k*(i-1)+1:k*i) = Y(p+1 - i:T-i,:);
    % p ������ �ش��ϴ� ��ü ������ ������ ����� YL�� (p-1) ���� ����� ������ ����
end
YL_mean = meanc(YL);
YL = demeanc(YL);
ki = p*k; % �� �Ŀ� �ִ� �������� ��
kki = k*ki; % ����� VAR�� ȸ�Ͱ���� ��

YLm = zeros(k,kki,T-p); % �������� 3�������� ���Ӱ� ������ ��
for t = 1:(T-p)
    xt = kron(eye(k), YL(t,:)); % x(t)' for regressor of SUR
    YLm(:,:,t) = xt; % p by k, x(t)'�� ���� ���� �״� ��
end
end

%% Phi ���ø� %%%%%%%%%%%%%%%%%%%%%%%%%%
function [Phi,Fm,beta] = Gen_Phi(Y0,YLm,Phi0,p,b_,var_,Omega_inv)
k = cols(Y0);
X = YLm; % ������, 3����
XX = zeros(p*k*k,p*k*k);
XY = zeros(p*k*k,1);
T0 = rows(Y0); % = T-p


for t = 1:T0
    Xt = X(:,:,t); % x(t)' for SUR regressor
    XX = XX + Xt'*Omega_inv*Xt; % B1������ summation �κ�
    XY = XY + Xt'*Omega_inv*Y0(t,:)'; % A������ summation �κ�
end

precb_ = invpd(var_);
B1_inv = precb_ + XX;
B1_inv = 0.5*(B1_inv + B1_inv');
B1 = invpd(B1_inv);
B1 = 0.5*(B1 + B1');
A = XY + precb_*b_; % b_ = B0
BA = B1*A; % full conditional mean

Chol_B1 = cholmod(B1)';
beta = BA + Chol_B1*randn(p*k*k,1); % beta sampling �ϱ�

% F ��ĸ����
Phi = reshape(beta,p*k,k);  % p*k by k, F ����� 1�� Block�� ��ġ
Fm = [Phi'; eye((p-1)*k), zeros(k*(p-1),k)]; % p*k by p*k

eigF = eig(Fm);
imagine = imag(eigF).^2;
absolute = real(eigF).^2;
test = sqrt(absolute + imagine)<1;
if min(test) == 0
    Phi = Phi0; % ������ ������ �������� ���ϸ� ���� iteration ���� ����
    Fm = [Phi'; eye((p-1)*k), zeros(k*(p-1),k)];
end

end

%% Omega ���ø� %%%%%%%%%%%%%%%%%%%%%%%%%%
function [Omega,Omega_inv] = Gen_Omega(Y,X,beta,nu,R0)

T = rows(Y);
k = cols(Y);

ehat2 = zeros(k,k); % �������� ������ ��

for t = 1:T
    Xt = X(:,:,t);
    ehat = Y(t,:)' - Xt*beta; % ������
    ehat2 = ehat2 + ehat*ehat'; % k by k
end

% Wishart�� ��Wishart�� ���踦 �̿�
Omega1_inv = ehat2 + invpd(R0);
% R0�� Wishart�� hyper-parameter�̹Ƿ� invpd(R0)�� ����
% Inverse-Wishart�� hyperparameter�� ��ȯ
Omega1 = invpd(Omega1_inv);% Wishart�� hyper-parameter�� ��ȯ
Omega_inv = randwishart(Omega1,(T+nu));
% nu(W,prior)-> nu+p+1(IW,prior)
% -> nu+p+1+T(IW,poster) -> nu+T(W,posterior)
Omega = invpd(Omega_inv);

end

%% ��ݹ����Լ�, �л���� ����ϱ� %%%%%%%%%%%%%%%%%%%%%%%%%%
function [ImpulseRespm,Binv,decomm] = Gen_ImRes(Omega,F,mlag,n0,ImpulseRespm,iter,decomm,restriction,Binv0,resindex,T,ind_chol)
coder.extrinsic('optimization')
k = rows(Omega);
BinvT = zeros(k,k);
Binv = zeros(k,k);
if restriction == 1
    % B�� ����� ����ϱ�
    chol_Omega = chol(Omega);
    for i = 1:k
        BinvT(i,:) = chol_Omega(i,:)*ind_chol(i,1);
    end
    Binv = BinvT'; 
    % Matlab�� ���ﰢ����� �����ϹǷ� Lower triangular matrix�� ����� �ִ� ��
elseif restriction == 2
    Psi = inv(eye(rows(F)) - F);
    Psi = Psi(1:k,1:k);
    
    THETAT = zeros(k,k);
    chol_THETA = chol(Psi*Omega*Psi');
    for i = 1:k
        THETAT(i,:) = chol_THETA(i,:)*ind_chol(i,1);
    end
    THETA = THETAT';
    
    Binv = inv(Psi)*THETA; %#ok<MINV>
elseif restriction == 3
    Binv = optimization(Omega,T,k,Binv0,resindex);
    Binv = reshape(Binv,k,k);
end


% �� j�� ���ؼ� ��ݹ����Լ� ����ؼ� �����ϱ�

FF = eye(rows(F)); % F^0 = eye
decom_numer = zeros(k,k);
decom_deno = zeros(k,1);
decom = zeros(k,k);
for j = 1:(mlag+1)
    
    psi_j = FF(1:k,1:k); % k by k
    theta = psi_j*Binv;  % k by k
    decom_numer_net = theta.^2;
    decom_deno_net = sum(theta.^2,2);
    decom_numer = decom_numer + decom_numer_net;
    decom_deno = decom_deno + decom_deno_net;
    for i = 1:rows(decom_deno)
        decom(i,:) = decom_numer(i,:)/decom_deno(i,1);
    end
    
    theta = vec(theta);  % k^2 by 1 �� �����ϰ� reshape
    decomvec = vec(decom);
    
    % �����ϱ�
    for i = 1:k^2
        ImpulseRespm(iter-n0, j, i) = theta(i,1);
        decomm(iter-n0, j, i) = decomvec(i,1);
        % iter-n0 : sampling�� ������ �������� ����
        % j��° ������ ���� iter-n0��° ���ø� ���� theta�ε� �� ���� (iter-n0, j) ��ǥ��
        % �����ϰ� �����
    end
    
    FF = FF*F;
    
end

end