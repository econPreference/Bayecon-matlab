% demeaning vectors(�������� ����� 0���� ����)
function [y] = demeanc(x)

rowsX = rows(x);
colsX = cols(x);
meanX = mean(x);
tmp = ones(rowsX,1);
y = x - tmp*meanX;

end
 

