#include <Servo.h>

Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(9); 
}

void loop() {
  setServoPosition();
}

void setServoPosition() {
  Serial.println("Enter angle (0-180):");
  
  while (!Serial.available()) {

  }
  
  int inputAngle = Serial.parseInt(); 
  int mappedMicros = map(inputAngle, 0, 180, 600, 2400); 
    
  if(mappedMicros < 600) {
    mappedMicros = 600; 
  } else if(mappedMicros > 2400) {
    mappedMicros = 2400; 
  }
    
  servo.writeMicroseconds(mappedMicros); 
  Serial.print("Servo Status: ");
  Serial.println(inputAngle);
}