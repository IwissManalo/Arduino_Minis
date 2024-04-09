
int button = 7;  
int LED =  4;   
int buttonState = 0;   

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(button);

  if(buttonState == LOW)       
    digitalWrite(LED, HIGH);
  else                          
    digitalWrite(LED, LOW);
}    