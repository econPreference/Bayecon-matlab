function [retf] = discret1(p,n)

psum = cumsumc(p); % p�� ���� ������
psuml = [0;psum(1:rows(p)-1)];
store = zeros(n,1);

i = 1;
while i <= n
    u = rand(1)*ones(cols(p),1);
    ind = gt(u,psuml); 
    ind1 = le(u,psum);
    iseql = ind == ind1;
    % psum=[.1 ; .2; .6; .8; 1] �̰� u=0.68�̸�
    % .6 ~ .8 ���̿� ��ġ�ϹǷ� 4��° �����ڸ��� 1�� ���� �ο��ϰ� �������� 0
    [~,maxind] = max(iseql); % �� 1�� ���� ��ġ    
    store(i) = maxind; 
    i = i + 1;
end

retf = round(store);
end
