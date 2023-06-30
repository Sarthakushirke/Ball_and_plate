clear all

% Reference circle

radius = 0.05;
freq_hz = 0.4; % We want a circle every 4 seconds
freq_w = 2*pi*freq_hz;

% Saturation

sat_ub = (pi/180)*5; % 5 degrees to radians
sat_lb = -(pi/180)*5; % 5 degrees to radians

%out = sim('Fuzzy_sim.slx');
%tra = out.y;
%plot(tra(:,1), tra(:,2));

