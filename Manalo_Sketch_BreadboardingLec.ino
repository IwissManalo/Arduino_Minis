#define LED1 2
#define LED2 4
#define LED3 7
#define LED4 8
#define LED5 12

void setup() {
  Serial.begin(9600);
  Serial.println("---Choose a Pattern--- \n[A] Boogie-Woogie \n[B] Cha-Cha \n[C] AIM");

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

void loop() {

  if (Serial.available() > 0) 
  { 
    char input = Serial.read();
    Serial.print("You have selected ");
    Serial.println(input); //prints the input
    
    switch (input) //checks the input and runs according to their condition 
    {
      case 'A':
        A();
        break;
      case 'B':
        B();
        break;
      case 'C':
        C();
        break;
    }
  }

}

void A()
{
  //Boogie-Woogie

  for (int i = 0; i < 5; i++)
  { 
    for (int i = 0; i < 4; i++) 
    {
      digitalWrite(LED1, HIGH);    // Turn on LED1
      delay(200);
      digitalWrite(LED1, LOW);     // Turn off LED1
      delay(200);

      digitalWrite(LED3, HIGH);    // Turn on LED3
      delay(200);
      digitalWrite(LED3, LOW);     // Turn off LED3
      delay(200);

      digitalWrite(LED5, HIGH);    // Turn on LED5
      delay(200);
      digitalWrite(LED5, LOW);     // Turn off LED5
      delay(200);
    }

    for (int i = 0; i < 2; i++)
    {
      digitalWrite(LED2, HIGH);    
      digitalWrite(LED4, HIGH);    // Turns on LED3 and 4
      delay(200);
    
      digitalWrite(LED2, LOW);    
      digitalWrite(LED4, LOW);     // Turn off LED3 and 4
      delay(200);
    }
  }

  Serial.print("Boogie-Woogie Done");

}

void B()
{
  //Cha-Cha
  for (int i = 0; i < 5; i++)
  { 
    for (int i = 0; i < 2; i++) 
    {
      digitalWrite(LED1, HIGH);    // Turn on LED1
      delay(200);
      digitalWrite(LED1, LOW);     // Turn off LED1
      delay(200);

      digitalWrite(LED5, HIGH);    // Turn on LED5
      delay(200);
      digitalWrite(LED5, LOW);     // Turn off LED5
      delay(200);

      digitalWrite(LED4, HIGH);    // Turn on LED4
      delay(200);
      digitalWrite(LED4, LOW);     // Turn off LED4
      delay(200);

      digitalWrite(LED3, HIGH);    // Turn on LED3
      delay(200);
      digitalWrite(LED3, LOW);     // Turn off LED3
      delay(200);

      digitalWrite(LED2, HIGH);    // Turn on LED2
      delay(200);
      digitalWrite(LED2, LOW);     // Turn off LED2
      delay(200);

      digitalWrite(LED2, HIGH);    // Turn on LED2
      delay(200);
      digitalWrite(LED2, LOW);     // Turn off LED2
      delay(200);
      
    }

    for (int i = 0; i < 2; i++)
    {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);      
      digitalWrite(LED5, HIGH);  
      delay(200);
    
      digitalWrite(LED1, LOW);    
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);    
      digitalWrite(LED4, LOW);
      digitalWrite(LED5, LOW);       
      delay(200);
    }
  }

  Serial.print("Cha-Cha Done");
}

void C()
{
  //Wave
  for (int i = 0; i < 2; i++)
  {
      digitalWrite(LED3, HIGH);
      delay(1000);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED4, HIGH);  
      delay(1000); 
      digitalWrite(LED1, HIGH);
      digitalWrite(LED5, HIGH);     
      delay(1000); 

      digitalWrite(LED1, LOW);
      digitalWrite(LED5, LOW);     
      delay(1000); 
      digitalWrite(LED2, LOW);
      digitalWrite(LED4, LOW);  
      delay(1000);
      digitalWrite(LED3, LOW);
      delay(1000);
  }
  Serial.print("Wave Done");  

}