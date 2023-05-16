%% Clear
clear;
clc;

%% Global variables
global A B C K F r;
%% Assign values
k_m = 4.4*10^-2;
j_1 = 3.75*10^-6;
j_2 = 3.75*10^-6;
b = 1*10^-5;
k = 0.2656;
d = 3.125*10^-5;
%% System Matrix
A=[0 0 1 0;0 0 0 1;-k/j_1 k/j_1 -(d+b)/j_1 (d+b)/j_1;k/j_2 -k/j_2 (d+b)/j_2 -(d+b)/j_2];
B=[0;0;k_m/j_1;0];
C=[1 0 0 0];

%% Convert to DT
% h =2.9*10^-3; %Sampling period as 2.9ms
h =2.5*10^-3; %Sampling period as 2.5ms
sys_cont = ss(A,B,C,0);
sys_disc = c2d(sys_cont,h);
A_d = sys_disc.A;
B_d = sys_disc.B;
C_d = sys_disc.C;
D_d = sys_disc.D;

phi = sys_disc.a;

eigs(phi)

%% Using numerical method (Euler's form)
gamma0 = zeros(4,1);
gamma1 = zeros(4,1);
step = 1e-5;
tau = 1*10^-3;
% tau = 0.9*10^-3;
%tau = 0.03655*10^-3;
for a = 0:step:(h-tau)
    gamma0 = gamma0+ step*expm(A*a)*B;
end
for a = (h-tau):step:h
    gamma1 = gamma1 + step*expm(A*a)*B;
end

%% Creation of Augmented mattrix
phi_aug = [phi gamma1;0 0 0 0 0]
gamma_aug = [gamma0;1]
C_aug = [C 0]

%% Check the controllability of augmnented 
Ctest = [gamma_aug phi_aug*gamma_aug (phi_aug)^2*gamma_aug (phi_aug)^3*gamma_aug (phi_aug)^4*gamma_aug];
det(Ctest)
%% Controller design 
alpha = zeros(1,5);
for c= -1:0.1:1
    alpha= [c c c c c];
    K = -acker(phi_aug,gamma_aug,alpha);
    F = 1/(C_aug*inv(eye(5)-phi_aug-gamma_aug*K)*gamma_aug);
    r = 1;
    x1 = zeros(1,floor(2/h)) ;x2 = zeros(1,floor(2/h)); x3 = zeros(1,floor(2/h)); x4 = zeros(1,floor(2/h)); x5 = zeros(1,floor(2/h));
    time = zeros(1,floor(2/h));
     input =  zeros(1,floor(2/h));
%     x1(2) = 0 ;x2(2) = 0;x3(2) = 0; x4(2) = 0; x5(2) = 0;
    input(2) = 0; time(2) = h;
    for i=2:2/h
        u = K*[x1(i);x2(i);x3(i);x4(i);x5(i)] + F*r;
        xkp1 = phi_aug*[x1(i);x2(i);x3(i);x4(i);x5(i)]+  gamma_aug*u;
        x1(i+1) = xkp1(1);
        x2(i+1) = xkp1(2);
        x3(i+1) = xkp1(3);
        x4(i+1) = xkp1(4);
        x5(i+1) = xkp1(5);
        input(i+1) = u;    
        time(i+1) = time(i) + h;   
     end
     if min(input)>-1 && max(input)<1 && max(x3)<50 && max(x4)<50
        final_alpha = alpha;
        disp('Found!')
        break
     end
end

%%
figure(1)
plot(time, x1, 'b');
xlabel('time')
ylabel('theta_1')
title('theta_1 rotation')
figure(2)
plot(time, input, 'b');
xlabel('time')
ylabel('input')
title('Input')
figure(3)
plot(time, x3, 'b');
xlabel('time')
ylabel('omega1')
title('Angular velcoity 1 (X_3)')
figure(4)
plot(time, x4, 'b');
xlabel('time')
ylabel('omega2')
title('Angular velcoity 2 (X_4)')
figure(5)
plot(time, x5, 'b');
xlabel('time')
ylabel('Previous input')
title('Previous input u_k')
max_input = max(input)


%% Simulink
%hp = 0.0001;
% hc = h;
% reference = 1;
% delay_count = floor(tau/hp);
% sys_disc = c2d(sys_cont,hp);
% Ad_plant = sys_disc.A;
% Bd_plant = sys_disc.B;
% Cd_plant = eye(4);
% Dd_plant = zeros(4,1);
assignment1_2022_Simulink_init_Dualrotary(tau,h,K,F)

%Hc = 2.5*10^-3;
%Hc = 2e-3;