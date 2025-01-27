#include <Servo.h>

//Define servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

//Define flex sensor pins
const int flexSensor1Pin = A0; //Flex sensor 1
const int flexSensor2Pin = A1; //Flex sensor 2
const int flexSensor3Pin = A2; //Flex sensor 3
const int flexSensor4Pin = A3; //Flex sensor 4
const int flexSensor5Pin = A4; //Flex sensor 5

//Define servo angles
int servo1Angle =90;
int servo2Angle =90;
int servo3Angle =90;
int servo4Angle =90;
int servo5Angle =90;

//Define threshold for flex sensor readings
const int flexSensorThreshold = 50;

void setup(){
  //Initialize serial communication
  Serial.begin(9600);

//Initialize servos
  servo1.attach(9); //Connect servo1 to pin 9
  servo2.attach(10); //Connect servo1 to pin 10
  servo3.attach(11); //Connect servo1 to pin 11
  servo4.attach(12); //Connect servo1 to pin 12
  servo5.attach(13); //Connect servo1 to pin 13

  //Set initial servo positions
  servo1.write(servo1Angle);
  servo2.write(servo2Angle);
  servo3.write(servo3Angle);
  servo4.write(servo4Angle);
  servo5.write(servo5Angle);
}

void loop() {
  //Read flex sensor values
  int flexSensor1Value = analogRead(flexSensor1Pin);
  int flexSensor2Value = analogRead(flexSensor2Pin);
  int flexSensor3Value = analogRead(flexSensor3Pin);
  int flexSensor4Value = analogRead(flexSensor4Pin);
  int flexSensor5Value = analogRead(flexSensor5Pin);

//Check if flex sensors are flexed
if (flexSensor1Value >flexSensorThreshold){
  servo1Angle+=5;// Increase servo1angle
}
  else if (flexSensor1Value < flexSensorThreshold-50){
  servo1Angle-=5;//Decrease servo1angle
}

if (flexSensor2Value >flexSensorThreshold){
  servo2Angle+=5;// Increase servo2angle
}
  else if (flexSensor2Value < flexSensorThreshold-50){
  servo2Angle-=5;//Decrease servo2angle
}

if (flexSensor3Value >flexSensorThreshold){
  servo3Angle+=5;// Increase servo3angle
}
  else if (flexSensor3Value < flexSensorThreshold-50){
  servo3Angle-=5;//Decrease servo3angle
}
if (flexSensor4Value >flexSensorThreshold){
  servo4Angle+=5;// Increase servo4angle
}
  else if (flexSensor4Value < flexSensorThreshold-50){
  servo4Angle-=5;//Decrease servo4angle
}
if (flexSensor5Value >flexSensorThreshold){
  servo5Angle+=5;// Increase servo5angle
}
  else if (flexSensor5Value < flexSensorThreshold-50){
  servo5Angle-=5;//Decrease servo5angle
}

//Constrain servo angles to valid range 
  servo1Angle = constrain(servo1Angle, 0, 180);
  servo2Angle = constrain(servo2Angle, 0, 180);
  servo3Angle = constrain(servo3Angle, 0, 180);
  servo4Angle = constrain(servo4Angle, 0, 180);
  servo5Angle = constrain(servo5Angle, 0, 180);

//Update servo positions
  servo1.write(servo1Angle);
  servo2.write(servo2Angle);
  servo3.write(servo3Angle);
  servo4.write(servo4Angle);
  servo5.write(servo5Angle);

  //Print flex sensor values to serial monitor
  Serial.print("Flex Sensor 1:");
  Serial.print("FlexSensor1Value");
  Serial.print("Flex Sensor 2:");
  Serial.print("FlexSensor2Value");
  Serial.print("Flex Sensor 3:");
  Serial.print("FlexSensor3Value");
  Serial.print("Flex Sensor 4:");
  Serial.print("FlexSensor4Value");
  Serial.print("Flex Sensor 5:");
  Serial.print("FlexSensor5Value");

  delay(20); //Delay for stability
}