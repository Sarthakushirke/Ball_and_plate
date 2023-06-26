% Load the .mat file
data = load('sarthak_camera_exp.mat');

% Access the variables in the .mat file
X = data.sarthak_camera_exp.Y(20); % Replace 'variable1' with the actual variable name in the .mat file
Y = data.sarthak_camera_exp.Y(21); % Replace 'variable2' with the actual variable name in the .mat file

% New vision for comparison Sarthak
cal1 = [61,10];
cal2 = [411,5];
cal3 = [433,348];
cal4 = [67,359];
cal = [cal1;cal2;cal3;cal4];
scatter(cal(:,1),cal(:,2));
mid4_3 = cal4+(cal3-cal4)/2;
mid2_1 = cal1+(cal2-cal1)/2;
mid = [mid4_3;mid2_1];

figure
scatter(cal(:,1),cal(:,2))
hold on
scatter(mid(:,1),mid(:,2))

%% fit straight line for reference
a = (mid4_3(2)-mid2_1(2))/(mid4_3(1)-mid2_1(1));
b = mid2_1(2)-a*mid2_1(1);
test_x = [mid2_1(1):1:mid4_3(1)];
r = a*test_x+b;

% %% fit perpendicular straight line
% % Query points x_star,y_star
% x_star = mid2_1(1)-20;
% y_star = mid2_1(2)+100;
% test_x = [mid2_1(1):1:mid4_3(1)];
% c = y_star+(1/a)*x_star;
% r_perp = (-1/a)*test_x+c;
% x_real = (c-b)/(a-(1/a)); % This is the x pos [px] that the ball actually SHOULD be 
% gamma = [x_real,r_perp] - [x_star,y_star];

%%
figure
scatter(cal(:,1),cal(:,2))
hold on
scatter(mid(:,1),mid(:,2))
scatter(test_x,r)
scatter(x_star,y_star)
scatter(test_x,r_perp)

%% Calculate the 2 norm in means of the vector 
range = 22287:23555;
data_range_x = double(X.Data(range));
data_range_y = double(Y.Data(range));

sum = 0;
data1 = zeros(4,length(range));
for i = 1:length(range)
x_star = data_range_x(i);
y_star = data_range_y(i);
c = y_star+(1/a)*x_star; % Perpendicular line from query point towards straight path
r_perp = (-1/a)*x_star+c;
x_real = (c-b)/(a-(1/a));
gamma = [x_real,r_perp] - [x_star,y_star]; % Vector from query point to straight line
sum = sum + norm(gamma,2);
data1(1,i) = sum;
data1(2,i) = gamma(1);
data1(3,i) = gamma(2);
data1(4,i) = x_real;
end


figure
scatter(cal(:,1),cal(:,2))
hold on
scatter(mid(:,1),mid(:,2))
scatter(test_x,r)
scatter(data_range_x,data_range_y)

% figure
% scatter(data(4,:),data(1,:))
%% The same for the straight line accross the other side
range = 2656:4126;
% fit straight line for reference

mid4_1 = cal1+(cal4-cal1)/2;
mid3_2 = cal2+(cal3-cal2)/2;
mid = [mid4_1;mid3_2];
a = (mid4_1(2)-mid3_2(2))/(mid4_1(1)-mid3_2(1));
b = mid3_2(2)-a*mid3_2(1);
test_x = [mid4_1(1):mid3_2(1)];
r = a*test_x+b;

data_range_x = double(X.Data(range));
data_range_y = double(Y.Data(range));

sum = 0;
data2 = zeros(4,length(range));
for i = 1:length(range)
x_star = data_range_x(i);
y_star = data_range_y(i);
c = y_star+(1/a)*x_star; % Perpendicular line from query point towards straight path
r_perp = (-1/a)*x_star+c;
x_real = (c-b)/(a-(1/a));
gamma = [x_real,r_perp] - [x_star,y_star]; % Vector from query point to straight line
sum = sum + norm(gamma,2);
data2(1,i) = sum;
data2(2,i) = gamma(1);
data2(3,i) = gamma(2);
data2(4,i) = x_real;
end
