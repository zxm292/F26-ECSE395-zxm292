## Integration_Exploration

**Name**: Zhengxi Mi (zxm292)

**Date**: 09/25/26

*Getting hands on experience of actuators and sensors with ESP32 Lab Assignment - Designing our own system*

## Assignment Overview

+The lab provides hands-on experience of designing our own system that incorporates at least one sensor, one actuator and using ESP32. Morespecifically, I chose to use a touch sensor and a RGB LED as my actuator. The main function of this system would be modeling a tap-tap light that is commonly seen in our daily life.

## Repository Item Guide

Users can expect to find the following code files and their corresponding demo-videos in this repository.

+Access to those materials can be found as following:

Documentation: F26-ECSE395-zxm292 -> Lab#5 -> integration_exploration.md 

Videos:F26-ECSE395-zxm292 -> Lab#5

Codes: F26-ECSE395-zxm292 -> Lab#5 -> src Folder

1.main.cpp - This code has the function of changing the color of RGB LED when the touch sensor detects a signal

## Lab Objectives

+Design our own system that incorporates a sensor, an actuator and ESP32 board. 

+The design of the system possibly aims for having a head start on the product the group intended to design, solving the pain point provided by the stakeholder. 

## WorkBook

**Setup**: MacOS

+Editor: Visual Studio Code

+Build and upload tool: PlatformIO

+Board: Adafruit ESP32 Feather V2 (Borrowed from Lab; Quantity: 1)

+Components: Touch sensor, RGB LED Module, breadboard,  jumper wires (Borrowed from Lab from Sunfounder Universal Maker kit; Quantity: 1)

+Connection: USB-C cable with data-transfer capability (Self-Owned)

+Serial Monitor speed: 115200 baud

## Lab & Circuit Setup

Sensor: Touch Sensor Module

+ The use of touch sensor serves as the "input" collector of the system. 

Actuator: RGB LED Module

+ The RGB LED module acts as the means of output by the system. The reason of choosing these two components is mainly because this system could be implemented into the product we're going to design. More specifically, in our system, when the stakeholder feels distracted by the light displays, they could choose to temporally snooze or close that display. The touch sensor would likely to capture stakeholder's tap on the surface of the product and then the LED is expected to turn off.  

**System Function**
The system functions like a tap tap light. The inspiration comes from one of the intended functions we plan to integrate for the product we're designing(for the stakeholder). I incorporates the foundations we learned from previous labs and merged them into this more complicated system. This system uses a touch sensor as the input and an RGB LED module as the output. Each time the touch sensor detects a new touch, the ESP32 changes the RGB LED to the next color state. The sequence is OFF → Red → Green → Blue → OFF for each cycle. The previous code allows me to keep track of the previous touch state so that holding a finger on the sensor does not cause the colors to change continuously. 

For pictures of system setup please check the attachment of this document.

## Code Implementation
1.Open Visual Studio Code with the PlatformIO 

2.Go to PlatformIO Home → Open Project and select the Lab 5 folder in your local copy of the GitHub repository. Select the folder containing platformio.ini

3.Open the src folder and select the main.cpp to run (functions of programs are specified above)

4.Construct the circuit as instructed below in the circuit setup section using a touch sensor, an RGB LED Module, and the ESP32 board

5.Connect the ESP32 to the computer using a USB-C data cable.

6.Compile and upload the code to function

**Code Upload to ESP32**

+Involves the use of Github local repositories and PlatformIO

1.Open Lab#5 from local Github repository in PlatformIO (ant head icon > PIO Home > Open Project)

3.Connect the ESP32 using the USB-C data cable

4.Save the files, then selecting Compile & Upload

5.Set the serial monitor speed at 115200 baud (especially in plotformio.ini file)

## Time Reporting and Reflection
Time to Complete Assignment: 4.0 Hours
Level of Difficulty: Mid
Aspects of Difficulty:  N/A
Feels pretty comfortable with the course content till this point
No additional feedback 

## Pictures of Circuits
**Circuit schematic and Wire connections**

Touch Sensor: 

GND -> GND on ESP32

VCC -> 3V on ESP32

SIG -> A1 on ESP32


RGB LED Module:

R -> GPIO33

G -> GPIO27

B -> GPIO12

"-" -> GND

<img width="4032" height="3024" alt="Lab#5 Circuit" src="https://github.com/user-attachments/assets/a46946fd-6599-4753-8b35-b44f1f094161" />
