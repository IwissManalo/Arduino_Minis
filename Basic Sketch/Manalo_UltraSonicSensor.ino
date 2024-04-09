int triggerPin = 10;
int echoPin = A1;
int triggerPulse = 10;
int pulseDelay = 50;

int GREENled = 2;
int REDled = 4;
int YELLOWled = 5;

void setup() {
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(GREENled, OUTPUT);
  pinMode(REDled, OUTPUT);
  pinMode(YELLOWled, OUTPUT);
}

void loop() {

  digitalWrite(triggerPin, LOW);
  delayMicroseconds(triggerPulse);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(triggerPulse);
  digitalWrite(triggerPin, LOW);

  int pingTravelTime = pulseIn(echoPin, HIGH);
  float distance = ( pingTravelTime / 58 );
  Serial.println(distance);
  delay(pulseDelay);
  
  if (distance < 15) {
    digitalWrite(REDled, HIGH); 
    digitalWrite(GREENled, LOW); 
    digitalWrite(YELLOWled, LOW); 
  } else if (distance > 15 && distance < 25) {
    digitalWrite(GREENled, HIGH); 
    digitalWrite(REDled, LOW); 
    digitalWrite(YELLOWled, LOW); 
  } else if (distance > 25) {
    digitalWrite(YELLOWled, HIGH); 
    digitalWrite(REDled, LOW); 
    digitalWrite(GREENled, LOW); 
  }
}
