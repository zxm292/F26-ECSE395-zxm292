# playing_with_sensors (zxm292)

**Name**: Zhengxi Mi (zxm292)
**Date**: 09/11/26
*playing with sensors Lab Assignment*

## Lab Objectives
+Acquire analog voltage across a potentiometer to the ESP32 board and write a program that displays the voltage
+Get familiarize with a touch sensor and write code that outputs a message when the sensor detects a touch

## WorkBook
**Setup**: MacOS
+Editor: Visual Studio Code
+Build and upload tool: PlatformIO
+Board: Adafruit ESP32 Feather V2 (Borrowed from Lab; Quantity: 1)
+Components: SunFounder potentiometer, touch sensor, breadboard,  jumper wires (Borrowed from Lab; Quantity: 1)
+Connection: USB-C cable with data-transfer capability (Self-Owned)
+Serial Monitor speed: 115200 baud

**Code & Document Guide**: 
+platformio.ini -> This file configs the Adafruit ESP32 board, framework, and sets the serial monitor_speed
+potentiometer.cpp  -> Code for potentiometer(Rotation Sensor) that reads and prints raw potentiometer values from 0–4095 
+voltage.cpp -> Code converting potentiometer readings into voltage using a given formula, returning the result via terminal
+touch.cpp -> Code that involves touch sensor and combines with led from lab#2. When sensor detects touch, led lights up, and terminal printing a message indicating a touch occurs
+playing_with_sensors.md -> A documentation of setup for codes and lab operation process

**Code Implementation**
1.Open Visual Studio Code with the PlatformIO 
2.Go to PlatformIO Home → Open Project and select the Lab 3 folder in your local copy of the GitHub repository. Select the folder containing platformio.ini
3.Open the src folder and choose the program to run (functions of programs are specified above)
4.Uncomment the selected program making sure that setup and loop works properly
5.Connect the sensor according to the wiring lables on the parts. Just making sure that the sensor signal pin must match the pin defined in the selected code
6.Connect the ESP32 to the computer using a USB-C data cable.
7.Compile and upload the code to function
8.Rotate the potentiometer or touch and release the touch sensor based on different tasks

**Code Upload to ESP32**: 
+Involves the use of Github local repositories and PlatformIO
1.Open Lab 3 from local Github repository in PlatformIO (ant head icon > PIO Home > Open Project)
2.Uncomment the codes not being tested yet, so that only one setup() and one loop() definition are active at the time
3.Connect the ESP32 using the USB-C data cable
4.Save the files, then selecting Compile & Upload
5.Set the serial monitor speed at 115200 baud (especially in plotformio.ini file)

## Time Reporting and Reflection
Time to Complete Assignment: 4.5 Hours
Level of Difficulty: Medium
Aspects of Difficulty: Familiarize coding with C++ 
Feels pretty comfortable with the course content till this point
No additional feedback

