% �ڷ���� = Data=[�Ǿ��� �Һ��ڹ�������� M1(����)������ �ݱݸ� CD������ͷ�(91��)] 
% GDP������(����,��������)   �������(���, ��������)
% 1999M06:2018M06

clear;
clc;

Data = xlsread('kor_macro.xls','B2:F230');

un = Data(:,1);
inf = Data(:,2);
m1 = Data(:,3);
call = Data(:,4);
CD = Data(:,5);

grow = xlsread('kor_macro.xls','K2:K79');
sav = xlsread('kor_macro.xls','L2:L79');
% growth_int = interpol(growth,2);
% growth_int = growth_int(4:end,1);

% Data = [Data growth_int];

% clearvars Data_1