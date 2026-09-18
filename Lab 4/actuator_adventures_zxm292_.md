# actuator adventures (zxm292)

**Name**: Zhengxi Mi (zxm292)

**Date**: 09/18/26

*Getting hands on experience of actuators with ESP32 Lab Assignment*

## Assignment Overview

+The lab provides hands-on experience of connecting and control a DC Gear Motor and a Servo Motor using ESP32. The DC motor section examines how analogWrite() write values and delay values affect speed, direction, as well as different programmed rotation sequences. The Servo motor section examines how different pulse widths, PWM frequency, rotation range, and delays affect motion of the motor. 

## Repository Item Guide

Users can expect to find the following code files and their corresponding demo-videos in this repository.

+Access to those materials can be found as following:

Videos:F26-ECSE395-zxm292 -> Lab#4

Codes: F26-ECSE395-zxm292 -> Lab#4 -> src Folder 

1.TT Motor.cpp

2.TT Motor Rotation.cpp

3.TT Motor EC.cpp

4.Servo Motor.cpp

5.Servo Motor Radom.cpp

## Lab Objectives

+Learn how to connect, program, and control a DC gear motor and a servo motor using the ESP32 

+Explore the differences in movement, precision, feedback, and applications of DC gear motor and servo motor

+Examine the changes in speed, direction, and timing of a DC motor

+Examine how different pulse widths, signal frequency and rotation range affect motion


## WorkBook

**Setup**: MacOS

+Editor: Visual Studio Code

+Build and upload tool: PlatformIO

+Board: Adafruit ESP32 Feather V2 (Borrowed from Lab; Quantity: 1)

+Components: Servor motor, DC Gear motor, breadboard,  jumper wires (Borrowed from Lab from Sunfounder Universal Maker kit; Quantity: 1)

+Connection: USB-C cable with data-transfer capability (Self-Owned)

+Serial Monitor speed: 115200 baud

**Code Implementation**

1.Open Visual Studio Code with the PlatformIO 

2.Go to PlatformIO Home → Open Project and select the Lab 4 folder in your local copy of the GitHub repository. Select the folder containing platformio.ini

3.Open the src folder and choose the program to run (functions of programs are specified above)

4.Uncomment the selected program making sure that setup and loop works properly

5.Construct the circuit as instructed on the lab manual respectively for DC Gear Motor and Servo Motor Sections

6.Connect the ESP32 to the computer using a USB-C data cable.

7.Compile and upload the code to function

**Code Upload to ESP32**: 

+Involves the use of Github local repositories and PlatformIO

1.Open Lab 4 from local Github repository in PlatformIO (ant head icon > PIO Home > Open Project)

2.Uncomment the codes not being tested yet, so that only one setup() and one loop() definition are active at the time

3.Connect the ESP32 using the USB-C data cable

4.Save the files, then selecting Compile & Upload

5.Set the serial monitor speed at 115200 baud (especially in plotformio.ini file)

## Lab Procedure

1.Create file actuator adventures.md 

2.Prepare DC Gear motor, servor motor and ESP32 setup on the breadboard

3.Build circuit following instructions in the repository and set up the circuit

4.Set the benchtop DC Power Supply limited to 3V, 0.15A (For the DC Gear Motor Section)

5.Upload your code “TT Motor Rotate.cpp” to the ESP32 microcontroller

6.Change the following one at a time, to observe the change in behavior (analogWrite(), delay())

7.Modify the skeleton code TT Motor Rotate.cpp for having the motor runs clockwise for 5s, stops for 2s, runs counterclockwise for 5s and then stop for 2s

8.Comment the code as you work along

9.Push the “TT Motor Rotate.cpp” file to GitHub repo Lab 4 folder

10.Make modification to "TT Motor.cpp” to continuously increase and decrease motor speed for the extra credit 

11.Name the code “TT Motor EC.cpp” and push to Github repo Lab#4 folder

12.Setup the servo motor in Sunfounder Universal Maker Sensor kit with ESP32, breadboard, and jumper wires

13.Adjust the benchtop DC Power Supply limited to 5V, 0.75A

14.Upload the code “Servo Motor.cpp” to your ESP32 microcontroller

15.Change all of the following one at a time and observe the beahvior of the servo motor

–minPulseWidth 

– maxPulseWidth 

– setPeriodHertz 

– Rotation range 

– delay 

16.Modify the “Servo Motor Random.cpp” so the servo moves to random angles between 0°and 180° and with different delays

17.Push the commented code to the GitHub repo Lab 4 folder


## DC Gear Motor Behavior Description

+analogWrite() - When we increase the analogWrite value, the motor spins faster, and when decreasing the motor spins slower. 

+swap analogWrite() - The mootor spins in the opposite direction but at the speed set earlier

+delay() - Increase in the delay value makes the preceding action lasts longer, and vice versa with a shorter movement time or shorter stop time interval 

## Servo Motor Behavior Description

When changing the following variables:

– minPulseWidth - While the 180 degree endpoint stays the same, when we increase the minPulseWidth, the total travel of the motor reduces. The smaller value for the minPulseWidth, the longer for total travel. 

– maxPulseWidth - While the 180 degree endpoint stays the same, when we decrease the maxPulseWidth, the total travel of the motor reduces. The greater value for the maxPulseWidth, the longer for total travel. 

– setPeriodHertz - When we increase the value, there will be more control pulses persecond. When the frequency is low, the rotation of the motor appears to be less smooth. 

– Rotation range - Increasing the angle made the servo move through a wider angle and take longer to complete each sweep. Decreasing the range produced a smaller movement and a shorter sweep time. 

– delay - When increasing the delay time value, the sweep of the motor appears to be much slower as the wait time between angle commands. The sweep is becomes less smooth. When decreasing the value, the sweep becomes much faster.

## Time Reporting and Reflection

Time to Complete Assignment: 5.0 Hours

Level of Difficulty: Low

Aspects of Difficulty:  N/A

Feels pretty comfortable with the course content till this point

No additional feedback 

## Pictures of Circuits
<img width="1279" height="1706" alt="Lab#4 Circuit" src="https://github.com/user-attachments/assets/bbfd4f6e-432c-48e0-8024-f9ec01d33365" />

<img width="5712" height="4284" alt="Lab#4 Circuit(1)" src="https://github.com/user-attachments/assets/f412e7ab-c6dd-43bc-a37b-98a274f3577f" />





