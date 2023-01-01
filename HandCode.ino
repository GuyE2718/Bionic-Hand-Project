#include <Servo.h>

Servo servo1;

const int sensorPin = A3; // analog input pin for the sensor
const int threshold = 135; // threshold value for detecting a closing fist


void setup() {
  servo1.attach(9); // attach servo signal at digital in 9
  Serial.begin(9600); // initialize serial communication
}

void loop() {
  int sensorValue = analogRead(sensorPin); // read the value from the sensor
  Serial.println(sensorValue); // log the sensor value to the console
  
  if (sensorValue > threshold) { // if the sensor value is above the threshold
    servo1.writeMicroseconds(3500); // put servo at half open position if squeezed twice
  }
  else 
  {
    servo1.writeMicroseconds(500); // put servo at closed position
  }
}
