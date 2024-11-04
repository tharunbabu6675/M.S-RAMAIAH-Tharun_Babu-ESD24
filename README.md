# M.S-RAMAIAH-Tharun_Babu-ESD24
# Files in the Mat Lab and Simulink branch:
This branch focuses on the development and simulation of systems using MATLAB and Simulink. It includes models and scripts for various applications, emphasizing efficient design and implementation. The integration of MATLAB's computational capabilities with Simulink's graphical modeling environment allows for robust simulation of dynamic systems.
## File Description

- [Plot Random Numbers](#plot-random-numbers)
- [Trajectory Projectile Calculation](#trajectory-projectile-calculation)
- [PID Transfer Function 1](#pid-transfer-function-1)
- [PID Transfer Function 2](#pid-transfer-function-2)
- [Water Tank Temperature Monitoring](#water-tank-temperature-monitoring)
- [Elevator Application](#elevator-application)
- [Washing Machine](#washing-machine)

## Plot Random numbers
File name:plot_random.m<br>
This code generates two distinct plots using randomly generated data. First, it prompts the user to input a limit, which defines the range for the x-axis. The y-values are randomly generated integers between 1 and 15. A line plot with markers is created in the left subplot, labeled "Approach One," showcasing the relationship between the x-values and y-values. In the second subplot, labeled "Approach Two," another set of x and y values is randomly generated, this time within the range of 1 to 6. Both plots feature line styles with circular markers and have axes labeled accordingly. The overall structure allows for visual comparison of two different approaches using randomly generated data sets.<br/><br/>
<img src="https://github.com/user-attachments/assets/c0888db2-2a1e-4573-87d5-0825726870c2" alt="Analysis Plot" width="350" height="350"><br>
Fig:Sample Output


## Trajectory Projectile Calculation
File Name:trajectory_Projectile.m<br>
function calculates the maximum height and range of a projectile launched at a fixed angle of 45 degrees. It takes an array of initial velocities and uses the sine of the launch angle to compute the maximum height and horizontal range for each velocity. The gravitational acceleration is set at 9.81 m/s². The function employs two loops: <br/>The first calculates the maximum height using the formula: *h=v2sin⁡2(θ)2/2gh<br>  The second calculates the range using:R=v2sin⁡(2θ)gR=gv2sin(2θ)​*. <br/>The results are displayed in arrays and visualized using a plot that represents the relationship between range and maximum height. The plot is customized with labels and a title for clarity. This function provides valuable insights into projectile motion, illustrating how initial velocity affects both the range and height of the projectile.The final output graph:<br/><br/><img src="https://github.com/user-attachments/assets/e5336b35-cc1f-42a1-8e05-008cb6615232" alt="Analysis Plot" width="350" height="350"><br>
Fig:Range vs Height graph

## PID Transfer Function 1
File 3:pid_1.slx
The control system features a feedback loop comprising a summation block, a PID controller, and a transfer function to achieve the desired output based on error correction.<br/>
* *Input Signal:* A step input serves as the setpoint, providing a reference for the system to follow.<br/>
* *Error Calculation:* A summation block calculates the difference between the input signal and feedback, generating an error signal to guide the PID controller.<br/>
* *PID Control & Transfer Function:* The error signal is processed by the PID controller, which adjusts the control output.<br/>This output is fed into the transfer function:  *s3−s+10s4+3s2−20/s4+3s2−20s3−s+10​*  to model the system’s dynamic response.<br/>
* *Visualization*:The processed signal is directed to a scope block to observe and analyze the system’s response to the input over time.
<p align="center">
<img src="https://github.com/user-attachments/assets/79ac0e5d-b88b-4b5f-843c-41206c932de5" alt="Image 2" width="45%" style="display: inline-block;"/>
<img src="https://github.com/user-attachments/assets/9fe6b0c1-6b47-46a6-af78-34339de28c28" alt="Image 1" width="45%" style="display: inline-block;"/>
</p>

Fig:(Right)Tuned parameters with stable system.(Left):Graph analysis
## PID Transfer Function 2
File 4:pid_2.slx
* *Feedback Control System:* Represents a feedback loop with a step input, summation block, PID controller, and a transfer function to maintain a stable output based on error correction.<br/>
* *Error Calculation:* The step input signal is compared with the feedback signal, generating an error used to guide system corrections.<br/>
* *PID Control:* The PID controller processes the error signal using proportional, integral, and derivative gains to adjust the control signal.<br/>
* *Transfer Function:* The adjusted signal passes through the transfer function:
   *s3+2s2+s+10s4+3s−20/s4+3s−20s3+2s2+s+10​* <br/>which models the system's response to the control input.<br/>
* *Graph Visualization:* The system’s output is visualized using a scope block, showing how the system tracks and responds to the input signal over time.<br/>
<p align="center">
  <img src="https://github.com/user-attachments/assets/e12a72a9-9457-4b2e-95d3-9bca0c71ae31" alt="Image 2" width="45%" style="display: inline-block;"/>
  <img src="https://github.com/user-attachments/assets/ac006905-e103-4aa7-9e12-ff52697d46cd" alt="Image 2" width="45%" style="display: inline-block;"/>
</p><br/>


Fig:(Right)Tuned parameters with stable system.(Left):Graph analysis.
## Water Tank Temperature monitoring
File 5:room_temp.slx

* *Water Tank:* Contains water with an initial temperature.<br/>
* *Heat Source:* Adds energy (heat) to the water tank.<br/>
* *Energy Balance Equation:* Temperature change rate is given by *dTdt=Qm⋅CpdtdT​=m⋅Cp​Q​.* <br/>
* *Variables:*<br/>
    * *TT:* Water temperature in °C.<br/>
    * *QQ:* Heat input in Watts (Joules/second).<br/>
    * *mm:* Mass of water, set to *10 kg.*<br/>
    * *CpCp​:* Specific heat capacity of water, set to *4.18 kJ/(kg·°C).*<br/>
* *Model Parameters:* Using a gain block with Gain=*110×4180Gain=10×41801​*.<br/>
* *Simulation Output:* Displays the increasing temperature of the water over time as energy is continuously added from the heat source.<br/>
![image](https://github.com/user-attachments/assets/9ce856f4-9165-4e95-ac9a-7be1521651d3)<br/>
Fig:Heat vs Time.
## Elevator Application
file name:lift_stateflow.slx
<br/>This file contains a Stateflow chart for an elevator control system featuring distinct states for each floor (Floor 1, Floor 2, Floor 3). The system includes transitions for moving Up and Down between floors, alongside logic for opening and closing doors. It manages two operational statuses: status_off and status_on, ensuring smooth functionality. The design demonstrates effective state management and transition handling for elevator control. This model serves as a foundational example for understanding Stateflow applications in control systems.<br/>
![image](https://github.com/user-attachments/assets/26ba392c-ba3d-4231-87aa-e15ff3d17a9e)<br/>
Fig:Designed stateflow for implemented logic.
![image](https://github.com/user-attachments/assets/94a10499-2236-4ce1-b040-c7065ebd6317)<br/>
Fig: Elevetor Model
## Washing Machine
fil name:washingMachine.slx
<br/>
This file simulates a washing machine cycle using a Stateflow chart with various operational states, including *Power Off, Power On, Wash, Valve, Rinse, Spin, and Done. The system monitors water levels with states such as **Water Low, Water State, and Water Highto ensure proper functionality throughout the cycle. Upon powering on, the machine transitions through **filling water, washing, rinsing, and spinning*,before signaling that the cycle is complete. Each state defines specific actions and conditions for transitioning to the next phase, providing a clear visualization of the washing process. This model serves as an educational tool to understand state-based control systems and their applications in real-world scenarios.<br/>
* *Key Features:*<br/>
    * State management for washing machine operations.<br/>
    * Conditional transitions based on water levels.<br/>
    * Clear definition of state actions for a realistic simulation.<br/>
*State transitions chart*
![image](https://github.com/user-attachments/assets/af526143-8ac6-48c9-8b1a-395f5f31dcfa)

![image)](https://github.com/user-attachments/assets/926f4247-ea30-47a0-9ac5-b6a03509c5cb)
