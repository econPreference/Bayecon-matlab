% �ڷ���� = ���÷��̼�, �Ǿ���, �ݸ�, 1960:Q1 ~ 2001:Q3

clear;
clc;

Data = xlsread('watson.xls','Sheet1','A1:C167');
inflat = Data(:,1);
un = Data(:,2);
rate = Data(:,3);