function Y = AR(X,t,p)
% Y = AR(X,t,p)
% X: ����, t: ����, p: �ѽ���

T = rows(X);
Y = X(p+1-t:T-t,:);

end