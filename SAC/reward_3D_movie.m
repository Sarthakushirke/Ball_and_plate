clear all; close all; clc;

%% Reward function refrence tracking over time 3D matrix
Ts=0.035; % Sampling time
T=5; % Period of reference
k_sim = round((T/Ts)*2); % 2 periods of time
t= Ts*(0:k_sim); % Time vector
gridsize = 100; % Total spacing 
x = linspace(-0.195,0.195,gridsize);
y = linspace(-0.195,0.195,gridsize);
[X,Y] = meshgrid(x,y);

Reward = zeros(length(X),length(Y),k_sim); % Preallocation
for i=1:length(X)
    for j=1:length(Y)
        for k = 1:k_sim
            if X(i,j)^2 + Y(i,j)^2 <= 0.003 && X(i,j)^2 + Y(i,j)^2 >= 0.002
                Reward(i,j,k) = exp(-1000*((-X(i,j)+xref(t(k),T))^2+(-Y(i,j)+yref(t(k),T))^2));
            else
                Reward(i,j,k) = -0.8*(abs(X(i,j)-xref(t(k),T))+abs(Y(i,j)-yref(t(k),T))-0.0025);
            end
        end
    end
end 

fps = 30;
figure()
for k = 1:k_sim
    title(sprintf('Plate temperature for time = %g [s]', round(t(k))),Interpreter='latex',FontSize = 10);
    xlabel('$e_{x} [m]$')
    ylabel('$e_{y} [m]$')
    zlabel('$reward [-]$')
    surf(X,Y,Reward(:,:,k))
    pause(1/fps)
end

%% Save movie to file MP4
animation(Reward,X,Y,x,y,t,'test1')
