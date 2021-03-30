/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

const int leda1 = 7;          // donar nom al pin 7 de l’Arduino
const int leda2 = 8;          // donar nom al pin 8 de l’Arduino
const int leda3 = 9;          // donar nom al pin 9 de l’Arduino
const int ledb1 = 10;         // donar nom al pin 10 de l’Arduino
const int ledb2 = 11;         // donar nom al pin 11 de l’Arduino
const int ledb3 = 12;         // donar nom al pin 12 de l’Arduino

//********** Setup ****************************************************************
void setup()
{

  pinMode(leda1, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(leda2, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(leda3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledb1, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(ledb2, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(ledb3, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(leda3, LOW);   
  digitalWrite(leda2, LOW); 
  digitalWrite(ledb3, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(leda1, HIGH);  //estat 1 S  
  digitalWrite(ledb1, HIGH);   

  delay(1000);
  
  digitalWrite(leda2, LOW);   
  digitalWrite(leda3, LOW); 
  digitalWrite(ledb1, LOW);   
  digitalWrite(ledb2, LOW);  
  digitalWrite(leda1, HIGH);  //estat 2 S  
  digitalWrite(ledb3, HIGH); 

  delay(1000);

  digitalWrite(leda2, LOW);   
  digitalWrite(leda3, LOW); 
  digitalWrite(ledb1, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(leda1, HIGH);   //estat 3 S 
  digitalWrite(ledb3, HIGH);
  
  delay(1000);

  digitalWrite(leda2, LOW);   
  digitalWrite(leda3, LOW); 
  digitalWrite(ledb1, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(leda1, HIGH);   //estat 4 S
  digitalWrite(ledb3, HIGH); 

  delay(1000);

  digitalWrite(leda2, LOW);   
  digitalWrite(leda3, LOW); 
  digitalWrite(ledb1, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(leda1, HIGH);   //estat 5 S
  digitalWrite(ledb3, HIGH);
  
  delay(1000);

  digitalWrite(leda2, LOW);   
  digitalWrite(leda3, LOW); 
  digitalWrite(ledb1, LOW);   
  digitalWrite(ledb3, LOW);
  digitalWrite(leda1, HIGH);   //estat 6 S
  digitalWrite(ledb2, HIGH);

  delay(1000);
  
  digitalWrite(leda2, LOW);   
  digitalWrite(leda3, LOW); 
  digitalWrite(ledb1, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(ledb3, LOW);
  digitalWrite(leda1, HIGH);   //estat 7 S

  delay(1000);
  
  digitalWrite(leda2, LOW);   
  digitalWrite(leda3, LOW); 
  digitalWrite(ledb1, LOW);   
  digitalWrite(ledb3, LOW);
  digitalWrite(leda1, HIGH);   //estat 8
  digitalWrite(ledb2, HIGH);

  delay(1000);

  digitalWrite(leda2, LOW);   
  digitalWrite(leda3, LOW); 
  digitalWrite(ledb1, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(ledb3, LOW);
  digitalWrite(leda1, HIGH);   //estat 9
  
  delay(1000);

  digitalWrite(leda2, LOW);   
  digitalWrite(leda3, LOW); 
  digitalWrite(ledb1, LOW);   
  digitalWrite(ledb3, LOW);
  digitalWrite(leda1, HIGH);   //estat 10
  digitalWrite(ledb2, HIGH);

    delay(1000);

  digitalWrite(leda2, LOW);   
  digitalWrite(leda3, LOW); 
  digitalWrite(ledb3, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(leda1, HIGH);   //estat 11
  digitalWrite(ledb1, HIGH);

    delay(1000);

  digitalWrite(leda2, LOW);   
  digitalWrite(leda1, LOW); 
  digitalWrite(ledb3, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(leda3, HIGH);   //estat 12
  digitalWrite(ledb1, HIGH);

    delay(1000);

  digitalWrite(leda2, LOW);   
  digitalWrite(leda1, LOW); 
  digitalWrite(ledb3, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(leda3, HIGH);   //estat 13
  digitalWrite(ledb1, HIGH);

    delay(1000);

  digitalWrite(leda2, LOW);   
  digitalWrite(leda1, LOW); 
  digitalWrite(ledb3, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(leda3, HIGH);   //estat 14
  digitalWrite(ledb1, HIGH);

    delay(1000);

  digitalWrite(leda2, LOW);   
  digitalWrite(leda1, LOW); 
  digitalWrite(ledb3, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(leda3, HIGH);   //estat 15
  digitalWrite(ledb1, HIGH);

    delay(1000);

  digitalWrite(leda3, LOW);   
  digitalWrite(leda1, LOW); 
  digitalWrite(ledb3, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(leda2, HIGH);   //estat 16
  digitalWrite(ledb1, HIGH);
  
    delay(1000);

  digitalWrite(leda3, LOW);  
  digitalWrite(leda2, LOW); 
  digitalWrite(leda1, LOW); 
  digitalWrite(ledb3, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(ledb1, HIGH);  //estat 17

    delay(1000);

  digitalWrite(leda3, LOW);   
  digitalWrite(leda1, LOW); 
  digitalWrite(ledb3, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(leda2, HIGH);   //estat 18
  digitalWrite(ledb1, HIGH);

    delay(1000);

  digitalWrite(leda3, LOW);  
  digitalWrite(leda2, LOW);  
  digitalWrite(leda1, LOW); 
  digitalWrite(ledb3, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(ledb3, HIGH);   //estat 19

    delay(1000);

  digitalWrite(leda3, LOW);   
  digitalWrite(leda1, LOW); 
  digitalWrite(ledb3, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(leda2, HIGH);   //estat 20
  digitalWrite(ledb1, HIGH);

    delay(1000);

  digitalWrite(leda3, LOW);   
  digitalWrite(leda2, LOW); 
  digitalWrite(ledb3, LOW);   
  digitalWrite(ledb2, LOW);
  digitalWrite(leda1, HIGH);   //estat 21
  digitalWrite(ledb1, HIGH);

    delay(1000);

}


  
