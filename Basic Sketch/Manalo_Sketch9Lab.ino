
#include "Volume.h"

int potPin = A5;
int buzzer = 5;
Volume volume;
int analogValue;

void setup() 
{
  volume.begin();
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() 
{
  Serial.println("Panalangin");
  // tone(Buzzer, 392, 500); //G4
  volume.tone(392, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(800);

  // tone(Buzzer, 784, 500); //G5
  volume.tone(784, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(700);

  // tone(Buzzer, 659, 300); //E5
  volume.tone(659, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(270);

  // tone(Buzzer, 587, 400); //D5
  volume.tone(587, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(400);

  // tone(Buzzer, 523, 700); //C5
  volume.tone(523, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(670);

  //--------------------- ko sa habang buhay
  Serial.println("ko sa habang buhay");

  // tone(Buzzer, 440, 300); // D5
  volume.tone(440, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);

  // tone(Buzzer, 659, 300);// E5
  volume.tone(659, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);

  // tone(Buzzer, 587, 600);// D5
  volume.tone(587, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(600);

  // tone(Buzzer, 554, 400); //CS5
  volume.tone(554, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(400);

  // tone(Buzzer, 587, 500); //CS5
  volume.tone(587, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(500);

  // tone(Buzzer, 659, 500); //E5
  volume.tone(659, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(1000);

  //----------------- makapiling ka
  Serial.println("makapiling ka");

  // tone(Buzzer, 659, 500); //E5
  volume.tone(659, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);

  // tone(Buzzer, 784, 500); //G5
  volume.tone(784, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);

  // tone(Buzzer, 659, 500); //E5
  volume.tone(659, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);

  // tone(Buzzer, 587, 300); //D5
  volume.tone(587, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);

  // tone(Buzzer, 523, 300); //C5
  volume.tone(523, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(650);

  //-------------------- makasama ka
  Serial.println("makasama ka");

  // tone(Buzzer, 659, 500); //E5
  volume.tone(659, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);
  volume.noTone();;

  // tone(Buzzer, 784, 500); //G5
  volume.tone(784, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);
  volume.noTone();


  // tone(Buzzer, 659, 500); //E5
  volume.tone(659, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);
  volume.noTone();;


  // tone(Buzzer, 587, 300); //D5
  volume.tone(587, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);
  volume.noTone();;


  // tone(Buzzer, 523, 300); //C5
  volume.tone(523, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(700);
    volume.noTone();;


  //-------------------- yan ang panalangin ko
  Serial.println("yan ang panalangin ko");

  // tone(Buzzer, 659, 500); //E5
  volume.tone(659, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);
  volume.noTone();


  // tone(Buzzer, 784, 500); //G5
  volume.tone(784, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);
  volume.noTone();


  // tone(Buzzer, 880, 500); //A5
  volume.tone(880, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(600);
  volume.noTone();


  // tone(Buzzer, 784, 500); //G5
  volume.tone(784, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);
  volume.noTone();


  // tone(Buzzer, 784, 500); //G5
  volume.tone(784, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);
  volume.noTone();


  // tone(Buzzer, 659, 300); //E5
  volume.tone(659, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);
  volume.noTone();


  // tone(Buzzer, 659, 300); //E5
  volume.tone(659, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(300);
  volume.noTone();


  // tone(Buzzer, 587, 500); //D5
  volume.tone(587, map(analogRead(potPin), 0, 1023, 50, 255));
  volume.delay(500);
  volume.noTone();

}
