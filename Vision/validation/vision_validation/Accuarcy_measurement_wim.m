% Load the .mat file
data = load('wim_camera_exp.mat');

% Access the variables in the .mat file
X = data.wim_camera_exp.Y(20); % Replace 'variable1' with the actual variable name in the .mat file
Y = data.wim_camera_exp.Y(21); % Replace 'variable2' with the actual variable name in the .mat file


% Old vision for comparison WIM
cal1 = [88,17];
cal2 = [525,8];
cal3 = [554,445];
cal4 = [92,457];


%% Plot the graph
% Plot Variable 1
figure;
subplot(2, 1, 1);
plot(X.Data);
xlabel('X-axis');
ylabel('Y-axis');
title('Plot of Variable 1');

% Plot Variable 2
subplot(2, 1, 2);
plot(Y.Data);
xlabel('X-axis');
ylabel('Y-axis');
title('Plot of Variable 2');


%% Extract specific data points from the variables
data_range_x = X.Data(2656:4126);
data_range_y = Y.Data(20746:22168);
% 
% Plot Variable 1
figure;
subplot(2, 1, 1);
plot(data_range_x);
xlabel('X-axis');
ylabel('Y-axis');
title('Plot of Variable 1');

% Plot Variable 2
subplot(2, 1, 2);
plot(data_range_y);
xlabel('X-axis');
ylabel('Y-axis');
title('Plot of Variable 2');

%%
figure;
% Plot the straight line
% x_line = 1:length(data_range_x);
% y_line = x_line; % Replace slope and intercept with the actual values for the line equation
% plot(x_line, y_line, 'r--', 'LineWidth', 2); % Red dashed line
% hold on;
% Plot the data points
plot(data_range_x, 'bo', 'MarkerSize', 1); % Blue circles
hold on
plot(data_range_y, 'go', 'MarkerSize', 1); % Green circles

xlabel('X-axis');
ylabel('Y-axis');
title('Wim Vision Accuarcy');

% Add legend
legend('Straight Line', 'Data Points X', 'Data Points Y');
