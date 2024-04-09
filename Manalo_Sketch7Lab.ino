
int button = 7;  
int LED1 =  4;  
int LED2 =  5;  
int buttonState = 0;   

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(button);

  if(buttonState == LOW) {      
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
  } else {                     
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
  }
}
