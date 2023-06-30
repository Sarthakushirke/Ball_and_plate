clear all
close all
%% initializa
% Reference circle

radius = 0.1;
freq_hz = 0.2; 
freq_w = 2*pi*freq_hz;

% Saturation

sat_ub = (pi/180)*5; 
sat_lb = -(pi/180)*5; 

%% sim
out = sim('Fuzzy_sim_Finalmodel.slx');
x = out.x;
ref_x = out.x_ref;
y = out.y;
ref_y = out.y_ref;

t = out.time;

%% compare with normal pid
error_p_x = out.PIDerror_x;
error_f_x = out.FUZZYerror_x;
error_p_y = out.PIDerror_y;
error_f_y = out.FUZZYerror_y;

PID_sig_x = out.PID_sa_x;
FUZZY_sig_x = out.FUZZY_sa_x;
figure(1)
plot(t, error_p_x , 'b', t, error_f_x,'r');
%xlim([0 20]);  
%ylim([-0.06 0.06 ]); 
title("Compare error X")
legend('Normal PID', 'Fuzzy PID');

figure(2)
plot(t, error_p_y , 'b', t, error_f_y,'r');
%xlim([0 20]);  
%ylim([-0.06 0.06 ]); 
title("Compare error Y")
legend('Normal PID', 'Fuzzy PID');

%% plot
figure(3);
plot(t, x, 'b', t, ref_x,'r');
%xlim([0 20]);  
%ylim([-0.06 0.06 ]); 
title("Output X")
legend('Fuzzy PID', 'Reference');

figure(4);
plot(t,y , 'b', t, ref_y,'r');
%xlim([0 20]);  
%ylim([-0.06 0.06 ]); 
title("Output Y")
legend('Fuzzy PID', 'Reference');

figure(5);
plot(x, y, 'b', ref_x, ref_y,'r');
title("Trajectory")
legend('Tracked Trajectory', 'Reference Trajectory');

% figure(6)
% plot(t, PID_sig_x , 'b', t, FUZZY_sig_x,'r');
% xlim([0 20]);  
% ylim([-0.06 0.06 ]); 
% title("Saturated signal X")
% legend('Normal PID', 'Fuzzy PID');
