# CarND-Controls-PID
CarND PID Controller Project from Self Driving Car Nanodegree of Udacity 

Source code: [https://github.com/ricardoues/CarND-Controls-PID/tree/master/src](https://github.com/ricardoues/CarND-Controls-PID/tree/master/src)

## Reflection 
The code was compiled in a 32 bit machine with Ubuntu 16.04.4 installed. In order to get the best parameters for the PID controller, I used manual tuning. The way I tuned the constants is as follows: 

1. Set Kp, Ki, and Kd to 0. 
2. I increase Kp, I try the following values: 0.01, 0.02, 0.03, 0.04, 0.05, 0.06, 0.07, 0.08, 0.09, 0.1. The best value was 0.05. 
3. I increase Kd, I try the following values: 0.01, 0.02, 0.03, 0.04, 0.05, 0.06, 0.07, 0.08, 0.09, 0.1, 0.2, 0.3, 0.4, 0.5. The best value was 0.4. 
4. I increase Ki, I try with the following values: 0.0001,  0.00001, 0.000001. The best value was 0.00001. 




## How to compile the project
Clone the repository and inside the main directory run the following command:

./build.sh 

## Running the project 
Follow the instructions provided in the below link: 

[https://github.com/udacity/CarND-PID-Control-Project](https://github.com/udacity/CarND-PID-Control-Project)



