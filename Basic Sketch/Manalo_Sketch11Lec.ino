
#include <Servo.h>

#define LED_PIN 11     
#define SERVO_PIN 9   
#define POTENTIOMETER_PIN A0 
Servo servo; 

void setup() {
  Serial.begin(9600);
  servo.attach(SERVO_PIN); 
  pinMode(LED_PIN, OUTPUT); 
}

void loop() {
  int potValue = analogRead(POTENTIOMETER_PIN); 
  int servoAngle = map(potValue, 0, 1023, 0, 180); 
  servo.write(servoAngle); 

  Serial.println(servoAngle);

 
  int brightness = map(servoAngle, 0, 180, 255, 0);

  analogWrite(LED_PIN, brightness); 
  
  delay(100); 
}