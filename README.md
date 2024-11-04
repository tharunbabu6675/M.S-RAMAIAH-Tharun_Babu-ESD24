# M.S-RAMAIAH-Tharun_Babu-ESD24
## Arduino 
  This branch focuses on the development and implementation of systems using Arduino boards. It includes models and scripts for various applications, emphasizing efficient design and execution. The integration of        Arduino's programming capabilities allows for effective control and interaction with hardware components, facilitating robust real-time simulation and monitoring of dynamic systems.<br>

-  [Components](#components)
- [Countdown Timer with Obstacle Activated Reset](#countdown-timer-with-obstacle-activated-reset)
- [Digital Stopwatch](#digital-stopwatch)
- [Distance Measurement Display](#distance-measurement-display)
- [Motion Activated Alarm](#motion-activated-alarm)
- [People Counter with Detection](#people-counter-with-detection)
- [Smart Distance Counter](#smart-distance-counter)
- [Temperature Monitoring System](#temperature-monitoring-system)
- [Touch Activated Range Finder](#touch-activated-range-finder)

## Components
*What is Arduino?*

Arduino is an open-source electronics platform based on easy-to-use hardware and software. Arduino boards are able to read inputs - light on a sensor, a finger on a button, or a Twitter message - and turn it into an output - activating a motor, turning on an LED, publishing something online. You can tell your board what to do by sending a set of instructions to the microcontroller on the board. To do so you use the Arduino programming language (based on Wiring), and the Arduino Software (IDE), based on Processing.For more information-[Link](https://docs.arduino.cc/learn/starting-guide/getting-started-with-arduino-tools/)
<div align="center">
  <img src="https://github.com/user-attachments/assets/00d68213-afcf-4cf6-8201-9d85368c42a3" alt="Touch Activated Range Finder" width="300"/>
  
  Arduino boards and their frequencies.
</div>

## 4-Digit 7-Segment LED Display
A 7-Segment LED Display consists of 8 discrete segments arranged in the shape of the number “8”, with an additional LED segment for a decimal point. These segments are controlled by individual input pins, allowing the display to show specific characters or numbers.<br>
  There are two wirings when it comes to 7-Segment LED displays: common anode and common cathode. Typically, all of the cathodes (negative terminals) or all of the anodes (positive terminals) of the segment LEDs are connected and brought out to a common pin; this is referred to as a “common cathode” or “common anode” device.To reduce the number of pins required for a 4-digit LED display, we multiplex the pins of each LED display block with the others. As a result, each LED block’s segment pin is connected to all the others LED block’s corresponding segment.
<div align="center">
  <img src="https://github.com/user-attachments/assets/04118182-2d7d-4d79-94f7-1369703d4f4d" alt="led module" width="45%" height="250" style="display: inline-block;"/>
  <img src="https://github.com/user-attachments/assets/0fc2a2f2-0d07-408e-86b6-ad6f2bd1e72d" alt="internal circuit" width="45%" height="250" style="display: inline-block;"/>
  
  4-digit 7-segment LED display internal connectivity showing the pins of the various LED blocks are interconnected.
</div>

## Touch Sensor
A touch sensor is an electronic sensor used in detecting and recording physical touch. Also known as tactile sensors, it’s a small, simple, low-cost sensor made to replace old mechanical switches we seen in the past.<br>
- *Working principle:*
<div align="center">
  <img src ="https://osoyoo.com/wp-content/uploads/2018/11/ttp223b-1024x1024.jpg" alt="sensor module" width="45%" height="250" style="display: inline-block;"/>
  <img src="https://github.com/user-attachments/assets/1e9e242b-66f4-44b7-b7db-0f8f73636727" alt="internal circuit" width="45%" height="250" style="display: inline-block;"/>
  
  (Right)Touch sensor switch circuit(Left)Internal circuit.
</div>

A touch sensor works like a switch, where when there’s contact, touch, or pressure on the surface of a touch sensor, it opens up an electrical circuit and allows currents to flow through it. 

## IR Sensor
IR sensor is an electronic device, that emits the light in order to sense some object of the surroundings. An IR sensor can measure the heat of an object as well as detects the motion. Usually, in the infrared spectrum, all the objects radiate some form of thermal radiation. These types of radiations are invisible to our eyes, but infrared sensor can detect these radiations.<br>
- *Wroking Principle* <br>
The emitter is an IR LED and the detector is an IR photodiode. The IR photodiode is sensitive to the IR light emitted by an IR LED. The photo-diode’s resistance and output voltage change in proportion to the IR light received. This is the underlying working principle of the IR sensor.<br>
<div align="center">
<img src="https://robu.in/wp-content/uploads/2020/05/robu-3-768x768-1.jpg" alt="Image 1" width="45%" height="250" style="display: inline-block;"/>
<img src="https://robu.in/wp-content/uploads/2020/05/IR-sensor-Working.png" alt="Image 2" width="45%" height="250" style="display: inline-block;"/>

  (Right) Pair of IR module (Left) Working illustration.
</div>
When the IR transmitter emits radiation, it reaches the object and some of the radiation reflects back to the IR receiver. Based on the intensity of the reception by the IR receiver, the output of the sensor defines.

## Ultra Sonic Sensor(HCSR04)
Ultrasonic sensors work by sending out a sound wave at a frequency above the range of human hearing. The transducer of the sensor acts as a microphone to receive and send the ultrasonic sound. Our sensors, like many others, use a single transducer to send a pulse and to receive the echo. The sensor determines the distance to a target by measuring time lapses between the sending and receiving of the ultrasonic pulse. This process is a key aspect of ultrasonic sensor working.<br>
- *Working Principle:*
    The distance is measured by detecting and calculating the time elapsed between ultrasonic wave emission and reception.
    Distance calculation uses the following formula: *Distance L = (T x C)/2*<br>
    In this formula, L stands for distance, T for the time between sound wave emission and reception while C is the sound speed. To obtain the distance to the object, the calculated value must be divided by 2, as T is     the total time the sound waves require for one travel to and fro.
<div align="center">
  <img src="https://electrobes.com/wp-content/uploads/2019/05/ultrasonic-module-distance-measuring-sensor-HC-SR04-in-pakistan.webp" alt="Image 1" width="45%" height="250" style="display: inline-block;"/>
  <img src="https://github.com/user-attachments/assets/52b28dbf-767d-4235-962e-509f8bcee40c" alt="Image 2" width="45%" height="250" style="display: inline-block;"/>
  
  (Left)HCSR04 Module (Right)Specifications.
</div>

## Pir Sensor
Generally, PIR sensor can detect animal/human movement in a requirement range. PIR is made of a pyroelectric sensor, which is able to detect different levels of infrared radiation.  The detector itself does not emit any energy but passively receives it. <br>
   <div align="center">
    <img src="https://robu.in/wp-content/uploads/2020/05/HC-SR501-pin-configuration.jpg" alt="Image 1" width="45%" height="250" style="display: inline-block; margin-right: 10px;"/>
    <img src="https://robu.in/wp-content/uploads/2020/05/9-10-2014-10-30-47-AM.jpg" alt="Image 2" width="45%" height="250" style="display: inline-block;"/> 
      
  (Left)Pir Sensor Module (Right)Schematic.
  </div>
  
  - *Working principle:*
    It detects infrared radiation from the environment. Once there is infrared radiation from the human body particle with temperature, focusing on the optical system causes the pyroelectric device to generate a           sudden electrical signal.The passive infrared sensor does not radiate energy to space. It receives the  infrared radiation from the human body to make an alarm. Any object with temperature is constantly radiating      infrared rays to the outside world. The surface temperature of the human body is between *36°C - 27°C* and most of its radiant energy concentrated in the wavelength range *8 um-12 um*.<br>
    In the detection area, the lens of the detector receives the infrared radiation energy of the human body through the clothing and focused on the pyroelectric sensor. When the human body moves in this surveillance      mode, it enters a certain field of view in sequence and then walks out of the field of view. The pyroelectric sensor sees the moving human body for a while and then does not see it, so the infrared radiation of        human body constantly changes the temperature of the pyroelectric material. So that it outputs a corresponding signal, which is the alarm signal.

## Temperature Sensor 
   The sensor can measure a fairly wide range of temperature (-50°C to 125°C), is fairly precise (0.1°C resolution), and is very low cost, making it a popular choice.
   - *working principle:*
     Unlike a thermistor, the TMP36 does not have a temperature sensitive resistor. Instead this sensor uses the property of diodes; as a diode changes temperature the voltage changes with it at a known rate. The           sensor measures the small change and outputs an analog voltage between 0 and 1.75VDC based on it
     <div align="center">
      <img src="https://github.com/user-attachments/assets/008718c3-c452-4087-9f1e-4d75b2e9dca1" alt="Image 1" width="45%" height="250" style="display: inline-block; margin-right: 10px;"/>
      <img src="https://i.sstatic.net/s7x1Q.png" alt="Image 2" width="45%" height="250" style="display: inline-block;"/>
       
      (Left)Tmp36 sensor (Right) Schematic.
      </div>
## Countdown Timer with Obstacle Activated Reset
  file name:CountdownTimerwithObstacle Activated Reset.ino <br>
  The code in this file performs an obstacle detection feature using an Arduino. It utilizes an ultrasonic sensor to measure distance, restarting the countdown if an object is detected within a specified range. The       countdown is displayed on a 7-segment display, showing numbers from 9 to 0, and an "E" is displayed if the timer completes. Ideal for applications requiring timed alerts with simple user interaction.<br>
## Digital Stopwatch
  file name:DigitalStopwatch.ino  <br>
  This Arduino code implements a simple digital stopwatch with an LCD display. Using the LiquidCrystal library, it displays elapsed time in seconds on a 16x2 LCD screen. The stopwatch features a start/stop switch to      control timing and a reset switch to clear the count. It includes debouncing for reliable switch operation and updates the display every second. The project is ideal for learning basic Arduino timing and display        functions.<br>
## Distance Measurement Display
  file name:DistanceMeasurementDisplay.ino <br>
  This Arduino code uses a 4-digit 7-segment display to show distance measurements from an ultrasonic sensor. The trigPin and echoPin control the sensor, while the display is managed by segment and digit pins to          display numbers from 0 to 9. The program measures the distance every second and updates the display in real-time. This project is ideal for applications requiring visual feedback for distance measurements in a          simple,   easy-to-read format.<br>
## Motion Activated Alarm 
  file name:MotionActivatedAlarm.ino  <br>
  This Arduino code uses a PIR (Passive Infrared) sensor to detect motion and activates a buzzer when a person is detected. The code reads input from the PIR sensor and outputs the detection status to both the            buzzer and the Serial Monitor. Each detection is timestamped in seconds, providing real-time feedback on when motion was identified. This setup is useful for simple security or motion-triggered alert systems.<br>
## People Counter with Detection
  file name:People Counter with Direction Detection.ino <br>
  This Arduino code implements a people counter with direction detection, using infrared (IR) sensors and an ultrasonic sensor. The system detects entries and exits based on sensor readings and displays the current       count on a 7-segment display. The ultrasonic sensor measures proximity to validate the entry/exit actions, ensuring accurate counting. The code also includes debounce logic to prevent false counts and outputs the       count to the serial monitor for additional tracking.<br>
## Smart Distance Counter
  file name:SmartDistanceCounter.ino <br>
  This Arduino code uses a 4-digit 7-segment display and an ultrasonic sensor to measure and display distances. The program reads the distance from the sensor, calculates the value in centimeters, and updates the         display every second. Each digit of the distance is mapped to the corresponding segments on the display for clear real-time feedback. This setup can be used in applications requiring precise distance measurement and    user-friendly visual output.<br>
## Temperature Monitoring System
  file name:TemperatureMonitoringSystem.ino <br>
  This Arduino code reads temperature data from an analog sensor connected to pin A0 and prints the temperature to the Serial Monitor. If the temperature exceeds a specified threshold (set to 100), a warning message      is displayed. The program checks the temperature every second, making it suitable for continuous temperature monitoring applications. Adjust the thresholdLimit variable to set your desired temperature limit.
## Touch Activated Range Finder
  file name:TouchActivatedRangeFinder.ino <br>
    This Arduino code uses an ultrasonic sensor and a touch sensor to create a touch-activated range finder. When the touch sensor is activated, the system measures the distance to an object using the ultrasonic            sensor and displays the result on a 7-segment display. The project includes pin configurations for the sensors and display, and functions for measuring distance, displaying digits, and clearing the display. Ideal       for distance-measuring applications with interactive touch-based control.
