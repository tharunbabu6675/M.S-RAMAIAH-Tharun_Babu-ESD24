% Parameters

v0 = 100;          % Initial velocity (m/s)
theta = 45;        % Launch angle (degrees)
g = 9.81;          % Gravitational acceleration (m/s^2)


theta_rad = deg2rad(theta); % Convert angle to radians

t_flight = (2 * v0 * sin(theta_rad)) / g;  % Calculate time of flight

range = (v0^2 * sin(2 * theta_rad)) / g;  % Calculate range (horizontal distance)

max_height = (v0^2 * (sin(theta_rad))^2) / (2 * g); % Calculate maximum height


t = linspace(0, t_flight, 100); % Time vector

% Calculate x and y coordinates


x = v0 * cos(theta_rad) * t;  % Horizontal distance
y = v0 * sin(theta_rad) * t - 0.5 * g * t.^2;  % Vertical distance



% Plotting the trajectory
figure;
plot(x, y, 'b-', 'LineWidth', 2);
hold on;
plot(range, 0, 'ro', 'MarkerSize', 8, 'MarkerFaceColor', 'r'); % Mark range
text(range, 0.5, sprintf('Range = %.2f m', range), 'HorizontalAlignment', 'center');
plot([0 range], [max_height max_height], 'g--', 'LineWidth', 1); % Max height line

text(0, max_height + 1, sprintf('Max Height = %.2f m', max_height), 'HorizontalAlignment', 'center');

xlabel('Distance (m)');
ylabel('Height (m)');
title('Projectile Motion Trajectory');

xlim([0 range * 1.1]);
ylim([0 max_height * 1.1]);

legend('Trajectory', 'Range', 'Max Height');
hold off;
