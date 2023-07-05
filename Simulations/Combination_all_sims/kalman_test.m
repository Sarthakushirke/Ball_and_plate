%% Calculating Kalman gain L for report
Q = [1,0,0,0;
     0,200,0,0;
     0,0,1,0;
     0,0,0,200];
R= [100,0;
    0,100];

%% Fuzzy control is very computationally intensive, so only run if you made changes
% Put RUN_SIMULATION to false Use the simulationdata.mat if you want did not change anything.
RUN_SIMULATION = true;

% System parameters
g = 9.81;
Ac = [0 1 0 0;0 0 0 0; 0 0 0 1;0 0 0 0];
Bc = (-5/7)*g*[0 0 ;1 0;0 0; 0 1];
Cc = [1 0 0 0; 0 0 1 0];
Dc = [0 0 ;0 0 ];
x0 = [0.1;0;0.1;0]; % Initial point
xobs0 = [0.1950;0;0.-0.1950;0]; % Worste case initial observer point

Ts = 0.035; % Sampling time !!!

ss_c = ss(Ac,Bc,Cc,Dc); % state space definition 
ss_d = c2d(ss_c,Ts,'zoh'); %discritization using matlab function 

A = ss_d.A;
B = ss_d.B;
C = ss_d.C;
D = ss_d.D;
[nx,nu] = size(B);

[~,L,~] = kalman(ss_d,Q,R,0);