function Output = ols(X,Y,output,graph) 

%% Ordinary Least Square
% Copyright owned by Lee sunHo(Korea. Univ)
% E-mail: derkone6602@korea.ac.kr

%% Input
% X: ������
% Y: ���Ӻ���
% output: 0�� �ԷµǸ� ����� ������� �ʰ� 1�� �ԷµǸ� ����� �����
% graph: '�Էµ� ����' ��°�� �ش�Ǵ� �������� X�࿡ ����
%         data value, fitted value, residual ���� �׷��ݴϴ�.
%         ���� ��� graph=3�̸� X�� 3���� �ش��ϴ� ������ X�࿡ ����
%         �׷����� �׷��ݴϴ�.

%% Output
% b: ȸ�Ͱ�� ����ġ
% est_var_b : ������ ȸ�Ͱ�� �������� �л�-���л� ���
% res : ����
% RSS : ����������
% est_sig2 : ������ �����л�
% t : ȸ�Ͱ��=0�̶�� ���������� ���� t-value
% p : t-������ ���� p-value

%% Algorithm

format shortG

[n,k] = size(X); % n: ǥ�� ����, k: ������ ����
b = inv((X'*X))*(X'*Y); %#ok<*MINV> %OLS ȸ�Ͱ�� ����ġ
res = Y - X*b; %residual
fitted = X*b; %fitted value
est_sig2 = res'*res/(n-k); % ������ �����л�
est_var_b = est_sig2*inv(X'*X); % ȸ�Ͱ�� �������� ������ �л�-���л� ���
est_se = sqrt(diag(est_var_b)); % ȸ�Ͱ�� �������� ǥ�ؿ���
t = b./est_se; % ���� ȸ�Ͱ�� ���Ǽ��� ���� �������� t-value
p = 2*min(tcdf(t,n-k),1-tcdf(t,n-k)); % t-������ ���� p-value
CI_upper = b + tinv(0.975,n-k).*est_se; % ȸ�Ͱ�� 95% �ŷڱ��� ����
CI_lower = b - tinv(0.975,n-k).*est_se; % ȸ�Ͱ�� 95% �ŷڱ��� ����
M=(eye(n) - ones(n,1)*inv(ones(n,1)'*ones(n,1))*ones(n,1)');
TSS = Y'*M*Y; % ��������
RSS = res'*res; % ����������
ESS = TSS - RSS; % ȸ��������
R2 = 1 - RSS/TSS; % �������
adj_R2 = 1 - (res'*res/(n-k))/((Y'*M*Y)/(n-1)); % ������ �������
SC = log(res'*res/n) + k/n*log(n); % ���ٸ��� ��������
AIC = log(res'*res/n) + 2*k/n; %��ī���� ��������
F = (R2/(k-1))/((1-R2)/(n-k)); % ������ ������ ��� ȸ�Ͱ���� 0�̶�� ���� �͹����� ����
Fp= (1 - fcdf(F,k-1,n-k)); % ���� ������ ���� p-��

Output.beta = b;
Output.var_beta = est_var_b;
Output.residual = res;
Output.RSS = RSS;
Output.sig2 = est_sig2;
Output.t_value = t;
Output.p_value = p;
Output.R2 = R2;

if nargin == 4
    Z1=[X(:,graph) Y fitted res];
    [~, sortOrder] = sort(Z1(:,1));
    Z2= Z1(sortOrder,:);
    plot(Z2(:,1),[Z2(:,2),Z2(:,3),Z2(:,4),zeros(n,1)]);
    legend('actual value', 'fitted line','residual');
end

if nargin == 2 || output == 1
    disp('==================================================================================');
    disp('Model: Ordinary Least Squares')
    disp('----------------------------------------------------------------------------------');
    disp(['       TSS= ' num2str(TSS) '  ESS= ' num2str(ESS) '  RSS= ' num2str(RSS)]);
    disp('----------------------------------------------------------------------------------');
    disp(['       d.f. = ' num2str(n-k) '    s.e. of error = ' num2str(sqrt(est_sig2))]) 
    %s.e. of error: �������� ǥ�ؿ���
    disp(['       Model test= ' num2str(F) ' (P-value= ' num2str(Fp) ')']);
    % Model test: �������� ������ ��� ȸ�Ͱ���� 0 �̶�� ���ձ͹����� ����
    disp('----------------------------------------------------------------------------------')
    disp('        R2         adj_R2      SchwarzIC    AkaikeIC');
    disp( [R2 adj_R2 SC AIC] );
    disp('==================================================================================');
    disp('        beta       est_se(b)     t-value      p-value    Confidence Interval(95%)  ');
    disp('==================================================================================');
    disp([b est_se t p CI_lower CI_upper]);
    disp('==================================================================================')
    
elseif output == 0
    
    return
    
end




end