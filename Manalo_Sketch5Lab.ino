#define LED1 2
#define LED2 4
#define LED3 7
int numberOfBlinks = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  Serial.println("Enter the number of blinks:");
}

void loop() {
  if (Serial.available() > 0) 
  { 
    numberOfBlinks = Serial.parseInt();
    Serial.print("The LED will blink ");
    Serial.print(numberOfBlinks);
    Serial.println(" times"); // Prints the number of blinks

    //Number of Blinks
    for (int i = 0; i < numberOfBlinks; i++) 
    {
      digitalWrite(LED1, HIGH);    // Turn on LED1
      delay(300);
      digitalWrite(LED1, LOW);     // Turn off LED1
      delay(300);

      digitalWrite(LED2, HIGH);    // Turn on LED2
      delay(300);
      digitalWrite(LED2, LOW);     // Turn off LED2
      delay(300);

      digitalWrite(LED3, HIGH);    // Turn on LED3
      delay(300);
      digitalWrite(LED3, LOW);     // Turn off LED3
      delay(300);

      digitalWrite(LED2, HIGH);    // Turn on LED2
      delay(300);
      digitalWrite(LED2, LOW);     // Turn off LED2
      delay(300);
    }
    Serial.println("Blinking finished.");
  }
}
