function output = interpol(input,divide)
% input : ���������� ������
% divide : �� �������� ������ �������� ��
% ���� ���, �б⺰ �����͸� ���� ���� �����͸� ������� �ϴ� ���
% �� �б� ���̿� 2���� �����Ͱ� ��������� �ϹǷ� (3�� 6���̿� 4,5 2���� ���ڰ� ����)
% divide�� 2�̴�.

T = rows(input);
t = 1:T;
data = input;
interval = 1:1/(1+divide):T;

output = spline(t,data,interval);
output = output';


end