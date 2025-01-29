# GROUP-7-PROJECT
This repository contains the project done by group 7 of the Electrical Electronics Engineering department in the Bells University of Technology

**Circuit Description**

This circuit is designed for a gesture-controlled robot arm. An Arduino board serves as the microcontroller, processing signals and controlling the arm's movements. 

**Key Components:**

Arduino Board: The central processing unit, receiving inputs, processing data, and sending control signals to the servos.

Servo Motors: These actuate the joints of the robot arm, enabling its movement in different directions.

Gesture Sensors: These are likely flex sensors or similar devices attached to a glove or other wearable device. They measure finger bending or hand movements, providing input for gesture recognition.

Resistors: These passive components are used for voltage division. 

Wires: Connect the various components.

Connection Process:

1. Power Supply: The Arduino and servo motors are connected to a power supply.
2. Arduino Connections:
   Gesture sensors are connected to the Arduino's analog input pins.
   Servo motors are connected to the Arduino's PWM (Pulse Width Modulation) output pins.
3. Servo Connections: The servo motors are connected to the robot arm's joints.

How it Works:

1. Gesture Detection: When the user makes a gesture (e.g., bending a finger), the flex sensor(s) on the glove detect the movement and generate an electrical signal.
2. Signal Processing: The Arduino reads the signals from the flex sensors and processes them to determine the type of gesture.
3. Servo Control: Based on the recognized gesture, the Arduino sends appropriate PWM signals to the servo motors.
4. Robot Arm Movement: The servo motors receive the signals and rotate accordingly, causing the robot arm to move as desired.


