clear all; close all;clc;

list_factory = fieldnames(get(groot,'factory'));
index_interpreter = find(contains(list_factory,'Interpreter'));
for i = 1:length(index_interpreter)
    default_name = strrep(list_factory{index_interpreter(i)},'factory','default');
    set(groot, default_name,'latex');
end

disp('startup.m has initiated')

% Clear the used vars
clear;

%% reward functions:

phi = linspace(-12*(pi/180),12*(pi/180),100);
theta = linspace(-12*(pi/180),12*(pi/180),100);
x = linspace(-0.195,0.195,100);

y = linspace(-0.195,0.195,100);

[X,Y] = meshgrid(x,y);
[Phi,Theta] = meshgrid(phi,theta);

%% reward function stabilization@(0,0)
r_plate = -0.03*(Phi.^2+Theta.^2); 

r_ball = -(X.^2+Y.^2) + exp(-1000*(X.^2+Y.^2));




r_ball_vel = -0.3*(abs(X)+abs(Y)); 

figure(1)
surf(X,Y,r_ball);
xlabel('x [m]')
ylabel('y [m]')
title("Reward space for ball position")

figure(2)
surf(Phi,Theta,r_plate)
xlabel('$\phi$ [rads]')
ylabel('$\theta$ [rad]')
zlabel('Reward [-]')
title("Reward space for plate angle")

figure(3)
surf(X,Y,r_ball_vel);
xlabel('$v_x$ [m/s]')
ylabel('$v_y$ [m/s]')
zlabel('Reward [-]')
title("Reward space for ball velocity")


figure(4)
surf(X,Y,r_ball_vel+r_ball+r_plate);
title("Overall reward space")

%% reward function refrence tracking
Ts=0.01;
k_sim = 1000;
T=5;
t= Ts*(0:k_sim); % Time vector
x=0.05*sin((2*pi*t/T)+pi/2);
y=0.05*sin(2*pi*t/T);
[X_ref,Y_ref] = meshgrid(x,y);


for i=1:100
    for j=1:100
        if X(i,j)^2 + Y(i,j)^2 <= 0.003 && X(i,j)^2 + Y(i,j)^2 >= 0.002
            if X(i,j)>=0
      
            Reward(i,j) = exp(-1000*((-X(i,j)+X_ref(i,j))^2+(-Y(i,j)+Y_ref(i,j))^2));
            else
            Reward(i,j) = 0;
            end
        else
            Reward(i,j) = -0.8*(abs(X(i,j)-X_ref(i,j))+abs(Y(i,j)-Y_ref(i,j))-0.0025);
        end
    end
end 
figure(5)
surf(X,Y,Reward)
xlabel('$e_{x} [m]$')
ylabel('$e_{y} [m]$')
zlabel('$reward [-]$')
figure(6)
plot(x,y)

%%

Ts=0.035;
k_sim = 10000;
T=6;
t= Ts*(0:k_sim); % Time vector
x=0.05*sin((2*pi*t/T)+pi/2);
y=0.05*sin(2*pi*t/T);

figure(1)
hold on 
plot(t,x)
plot(t,y)