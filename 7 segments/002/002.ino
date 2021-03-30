/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledA = 6; 
const int ledB = 7;          // donar nom al pin 7 de l’Arduino
const int ledC = 8;          // donar nom al pin 8 de l’Arduino
const int ledD = 9;          // donar nom al pin 9 de l’Arduino
const int ledE = 10;         // donar nom al pin 10 de l’Arduino
const int ledF = 11;         // donar nom al pin 11 de l’Arduino
const int ledG = 12;         // donar nom al pin 12 de l’Arduino
int buttonState = 0;
const int buttonPin = 2;
//********** Setup ****************************************************************
void setup()
{
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(ledC, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(ledD, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledE, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(ledF, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(ledG, OUTPUT);     // definir el pin 12 com una sortida
  pinMode(buttonPin, INPUT);
}

//********** Loop *****************************************************************
void loop()
{
   buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
  digitalWrite(ledA, LOW);   
  digitalWrite(ledB, LOW); 
  digitalWrite(ledC, LOW);   
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW); 
  digitalWrite(ledF, LOW);   
  digitalWrite(ledG, LOW); 
   } 
  else {
  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH); 
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH); 
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, LOW);  

  delay(1000);

  digitalWrite(ledA, LOW);   
  digitalWrite(ledB, HIGH); 
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW); 
  digitalWrite(ledF, LOW);   
  digitalWrite(ledG, LOW);  

  delay(1000);

  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH); 
  digitalWrite(ledC, LOW);   
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH); 
  digitalWrite(ledF, LOW);   
  digitalWrite(ledG, HIGH);  

  delay(1000);

  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH); 
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW); 
  digitalWrite(ledF, LOW);   
  digitalWrite(ledG, HIGH);  

  delay(1000);

  digitalWrite(ledA, LOW);   
  digitalWrite(ledB, HIGH); 
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW); 
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, HIGH);  

  delay(1000);

  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, LOW); 
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW); 
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, HIGH);  

  delay(1000);

  digitalWrite(ledA, LOW);   
  digitalWrite(ledB, LOW); 
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH); 
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, HIGH);  

  delay(1000);

  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH); 
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW); 
  digitalWrite(ledF, LOW);   
  digitalWrite(ledG, LOW);  

  delay(1000);

  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH); 
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH); 
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, HIGH);  

  delay(1000);

  digitalWrite(ledA, HIGH);   
  digitalWrite(ledB, HIGH); 
  digitalWrite(ledC, HIGH);   
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW); 
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, HIGH);  

  delay(1000);
}
}
