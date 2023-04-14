%   to compute the inverted gamma density on a grid
%   beta is also a vector 
%   outputs the log of the density
function [retf] = lnpdfig(sig2,a,b)

if rows(sig2) > rows(a)
   alpha = a*ones(rows(sig2),1);
   beta = b*ones(rows(sig2),1);
else
   alpha = a;
   beta = b;
end  
% sig2�� ������ ��츦 ���
% �� ���, ������ ���ҿ� ���� �쵵�� �������

   c = alpha.*log(beta) - gammaln(alpha);
   z = c - (alpha+1).*log(sig2) - beta./sig2;

 
retf = z;
end