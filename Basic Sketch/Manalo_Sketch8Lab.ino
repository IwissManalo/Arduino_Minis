
#define LED1 9
#define LED2 2
#define Analog A0

void setup() 
{
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() 
{
  int readValue = analogRead(Analog);
  int brightness = map(readValue, 0, 1023, 0, 255);
  
  if (brightness < 128) 
  {
    analogWrite(LED1, brightness * 2);
    analogWrite(LED2, 0);
  } 
  else 
  {
    analogWrite(LED1, 0);
    analogWrite(LED2, (brightness - 128) * 2);
  }
}