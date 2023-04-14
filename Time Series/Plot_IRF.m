function Plot_IRF(ImpulseRespm,postmom_B)

[~, mlag1, k2] = size(ImpulseRespm);
% k2 = �����ϰ� �׾����� k^2, mlag1 = mlag + 1 (0 ������ ����)

k = sqrt(k2);
ql = [0.025;0.5;0.975]; % 95% �ŷڱ���
xa = 0:(mlag1-1);

a = 1:k2;
a = reshape(a, k, k);

figure('Name','Impulse-Response Analysis([2.5%, 50%, 97.5%])');
zeroline = zeros(mlag1,1);


for i = 1:k2
    
    ImpulseResp_ij = ImpulseRespm(:,:,i); % n1 by (mlag+1) i��° ����� ���� ���� ����
    ImpulseResp_ij = quantile(ImpulseResp_ij,ql)'; % (mlag+1) by 3
    
    [r,c] = find(a==i);
    % i ��° ���: c��° ������ ������ݿ� ���� r��° ������ ����
    B = reshape(postmom_B(:,2),k,k);
    Binv = inv(B);
    
    subplot(k,k,i);
    plot(xa, ImpulseResp_ij(:, 1), 'k--', xa, ImpulseResp_ij(:, 2), 'b-',xa, ImpulseResp_ij(:, 3), 'k--', xa, zeroline, 'k:','linewidth', 2);
    xlim([0  mlag1]);
    title(['shock ',num2str(c) , ' to vari ', num2str(r)])
    xlabel(['Size of shock : ' num2str(Binv(r,c))])
    
end

end