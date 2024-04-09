//VEHICLE COLLISION SYSTEM (VCS)

#define RED 2
#define GREEN 4
#define TRIG_PIN 7
#define ECHO_PIN A0
#define BUZZER 12

#include <Servo.h>
Servo servo;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER, OUTPUT);
  servo.attach(9);
  servo.write(90);
}

void loop() {
  long duration, distance;
  
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  duration = pulseIn(ECHO_PIN, HIGH);
  
  distance = duration * 0.034 / 2;

  if (distance > 20) {
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
    noTone(BUZZER);

    for(int angle = 90; angle <= 180; angle++) {
      servo.write(angle);
      delay(10); 
    }
    for(int angle = 180; angle >= 90; angle--) {
      servo.write(angle);
      delay(10); 
    }
  } 
  else if(distance < 30)
  {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    tone(BUZZER, 1000);

    servo.write(90);
    delay(500);
  }
}




