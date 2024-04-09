#define LED1 2
int numberOfBlinks = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
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
      delay(3000);
      digitalWrite(LED1, LOW);     // Turn off LED1
      delay(3000);
    }
    Serial.println("Blinking finished.");
  }
}
