function [Y] = stdscale(rawY,option)

% option
% 0: ���, �л� �� �� ����ȭ
% 1: ��ո� ����ȭ
% 2: �л길 ����ȭ

if nargin == 1
   option = 0; 
end

T = rows(rawY);
k = cols(rawY);
std_Y = std(rawY);
st_Y = zeros(T,k);

if option == 0 || option == 2
    for i = 1:T
        st_Y(i,:) = rawY(i,:)./std_Y;
    end
end

if option == 0 || option == 1
    Y = demeanc(st_Y);
end

end
 


