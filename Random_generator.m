% Random Number Sequence Plotting

% Parameters
N = 100;           % Number of random numbers to generate
x = 1:N;           % x-axis values--sequence index

% Generate random numbers
random_numbers = rand(1, N);   % Uniformly distributed random numbers between 0 and 1

% Plotting the random numbers
figure;
plot(x, random_numbers, 'b-', 'LineWidth', 2);
grid on;


xlabel('Index');
ylabel('Random Value');
title('Line Graph of Random Numbers');
xlim([1 N]);
ylim([0 1]);
legend('Random Numbers', 'Location', 'Best');
