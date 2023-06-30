clear all; close all;

g = 9.81;
Ac = [0 1 0 0;0 0 0 0; 0 0 0 1;0 0 0 0];
Bc = (-5/7)*g*[0 0 ;1 0;0 0; 0 1];
Cc = [1 0 0 0; 0 0 1 0];
Dc = [0 0 ;0 0 ];
x0 = [0;0;0;0]; % Initial point

Ts = 0.035;
ss_c = ss(Ac,Bc,Cc,Dc); % state space definition 
ss_d = c2d(ss_c,Ts,'zoh'); % discritization using matlab function 
ss_d_ccf = canon(ss_d);

% Convert to controllable canonical form 
A = ss_d_ccf.A.';
B = ss_d_ccf.C.';
C = ss_d_ccf.B.';
D = ss_d_ccf.D;


A = A(1:2,1:2);
B = B(1:2,1);
C = C(1,1:2);
D = 0;
test_ss = ss(A,B,C,D);

poles = [0.5 0.5];
K = -acker(A,B,poles);
obspoles = [0.01 0.01];
l = acker(A',C',obspoles);
L = l';
Aobs = A-L*C;
Bobs = [B L];
Cobs = eye(2);
Dobs = [0,0;
        0,0];

