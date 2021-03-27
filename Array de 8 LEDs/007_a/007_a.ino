/**********************************************************************************
**                              Array de 8 LEDs                                  **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
unsigned long temps = 300;
const int led0 = 5;          // donar nom al pin 5 de l’Arduino



//********** Setup ****************************************************************
void setup()
{
  delay (temps);
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  Serial.begin(9600);
   for (int r = 0; r < 5; r ++){
   
        digitalWrite(led0, HIGH);    // posar a 5V el pin 5

        
  
        delay(temps);                  // es queden leds 500ms encesos
  
        digitalWrite(led0, LOW);     // posar a 0V el pin 5
  
        delay(temps);                  // es queden leds 500ms apagat

        }
  
}
//********** Loop *****************************************************************
void loop()
{
   
        
 }
//********** Funcions *************************************************************
