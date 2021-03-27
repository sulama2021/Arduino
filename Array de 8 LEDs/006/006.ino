/**********************************************************************************
**                              Array de 8 LEDs                                  **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
unsigned long temps = 300;
const int led0 = 5;          // donar nom al pin 5 de l’Arduino
int repeticions;



//********** Setup ****************************************************************
void setup()
{
  repeticions == 0;
  delay (temps);
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  
}
//********** Loop *****************************************************************
void loop()
{

   if (repeticions <= 5)
    {
        digitalWrite(led0, HIGH);    // posar a 5V el pin 5

        
  
        delay(temps);                  // es queden leds 500ms encesos
  
        digitalWrite(led0, LOW);     // posar a 0V el pin 5
  
        delay(temps);                  // es queden leds 500ms apagats

        repeticions ++;

        }
        else
        {
           digitalWrite(led0, LOW);
            }
                 
 }
//********** Funcions *************************************************************
