function Output = Reduced_BVAR(Y,p,n0,n1,nu,R0,b_,var_,ML)

coder.extrinsic('format')
coder.extrinsic('clc')

format shortG

k = cols(Y); % ������ ����
pkk = p*k*k;
n = n0 + n1;

% �ʱⰪ
% yf = zeros(k,1);
Omega0 = inv(R0*nu);
Omega_inv = R0*nu;
Omega = Omega0;
% beta = b_;
Phi = reshape(b_,p*k + 1,k);
% ����� �������� �������� precision matrix(���л������ �����)�� ��������� �ʱⰪ���� �� ��

% ����� ��������� ������ ��

consm = zeros(n1,k);
betam = zeros(n1,pkk);
Omegam = zeros(n1,k^2);
y_pred = zeros(n1,k);

%% ���ĺ��� �����ϱ�
[Y0,YLm,~] = makeYX(Y,p); % ���Ӻ���(Y0)�� ������(YLm) �����

beta_hat = b_;
Omega_hat = Omega0;
lnpost_hat = -exp(20); % ���Ƿ� ���� �ְ� ������
lnlik1 = 0;

for iter = 1:n
    
    [~, resid] = minresid(iter,100);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        disp('[Cons phi(1) phi(2) ... phi(p)] = ')
        disp(Phi')
        disp('Omega: ')
        disp(Omega)
    end
    
    % Phi sampling �ϱ�
    [Phi,beta] = Gen_Phi(Y0,YLm,p,b_,var_,Omega_inv);
    
    % Omega sampling �ϱ�
    [Omega,Omega_inv] = Gen_Omega(Y0,YLm,beta,nu,R0);
    
    % sampling�� 1�� ���� ������
    yf = Gen_Forecast(Y,Phi,Omega,p,k);
    
    if iter > n0 % burn - in�� ����� ����
        consm(iter-n0,:) = Phi(1,:);
        aux = Phi(2:end,:);
        aux1 = vec(aux')';
        betam(iter-n0,:) = aux1(1,:);
        vec_Omega = vec(Omega)';
        Omegam(iter-n0,:) = vec_Omega(1,:);
        y_pred(iter-n0,:) = yf';
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

Output.consm = consm;
Output.betam = betam;
Output.Omegam = Omegam;
Output.yfm = y_pred;
Output.lnML = lnML;
end

%% ����, ������ ����� %%%%%%%%%%%%%%%%%%%%%%%%%%

function [Y0,YLm,YL,Y0_mean,YL_mean] = makeYX(Y,p)

k = cols(Y); % ������ ��
T = rows(Y); % �ð迭�� ũ��

Y0 = Y(p+1:T,:); % ���Ӻ���
Y0_mean = meanc(Y0);
% Y0 = demeanc(Y0);
% ������(=Y�� ���Ű�) �����
YL = zeros(T-p,p*k);
for i = 1:p
    YL(:,k*(i-1)+1:k*i) = Y(p+1 - i:T-i,:);
    % p ������ �ش��ϴ� ��ü ������ ������ ����� YL�� (p-1) ���� ����� ������ ����
end
YL_mean = meanc(YL);
% YL = demeanc(YL);
ki = p*k; % �� �Ŀ� �ִ� �������� ��
kki = k*ki; % ����� VAR�� ȸ�Ͱ���� ��

YLm = zeros(k,kki + k,T-p); % �������� 3�������� ���Ӱ� ������ ��
for t = 1:(T-p)
    xt = kron(eye(k), [1 YL(t,:)]); % x(t)' for regressor of SUR
    YLm(:,:,t) = xt; % p by k, x(t)'�� ���� ���� �״� ��
end
end

%% Phi ���ø� %%%%%%%%%%%%%%%%%%%%%%%%%%
function [Phi,beta] = Gen_Phi(Y0,YLm,p,b_,var_,Omega_inv)

X = YLm; % ������, 3����
k = cols(Y0);
XX = zeros(p*k*k + k,p*k*k + k);
XY = zeros(p*k*k + k,1);
T0 = rows(Y0); % = T-p


for t = 1:T0
    Xt = X(:,:,t); % x(t)' for SUR regressor k by pkk
    XX = XX + Xt'*Omega_inv*Xt; % B1������ summation �κ�
    XY = XY + Xt'*Omega_inv*Y0(t,:)'; % A������ summation �κ�
end

precb_ = invpd(var_);
B1_inv = precb_ + XX;
B1_inv = 0.5*(B1_inv + B1_inv');
B1 = invpd(B1_inv);
B1 = 0.5*(B1 + B1');
A = XY + precb_*b_; % b_ = b0
BA = B1*A; % full conditional mean

Chol_B1 = cholmod(B1)';
beta = BA + Chol_B1*randn(p*k*k + k,1); % beta sampling �ϱ�

Phi = reshape(beta,p*k + 1,k);
% p*k by k; Phi�� ��ġ�� �� ������ ���� �������� ���������� ������ ���̴�.
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

%%
function yf = Gen_Forecast(Y,Phi,Omega,p,k)
% 1�� ���� �������� ���� ���Ŀ��������� sampling �غ��� ��

T = rows(Y); % Sample size

yf_X = Y(T - p +1:end, :); % ������ ���̴� ����������
yf_X = flip(yf_X);
PhiX = zeros(k, p);
Phi = Phi';
Cons = Phi(:,1);
Phi = Phi(:,2:end);

for idx = 1:p
    PhiX(:,idx) = Phi(:,(idx - 1)*k + 1:idx*k)*yf_X(idx,:)'; % k by k * k by 1
end %�� (p������ Phi)*(p ���� ������) ���� PhiX�� p���� ����

yf = Cons + sum(PhiX,2) + chol(Omega)'*randn(k,1); % sum(~,2)�� �ϸ� sum�� �຤�Ϳ� ���� ����
% sampling�� phi�� yf�� ����� ����ϰ� ��������� ���� yf�� sampling
end