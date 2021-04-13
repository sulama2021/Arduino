/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//******************************* Includes ****************************************

//******************************* Variables ***************************************
const int ledPin[] = {5, 6, 7, 8, 9, 10, 11, 12};   // definir array 
const int buttonPin2 = 4;             // definir pin 4
const int buttonPin3 = 3;             // definir pin 3
boolean buttonEstat2 = LOW;           // determinar estat inicial del polsador
boolean buttonEstat3 = LOW;           // determinar estat inicial del polasdor 

int ledNum = 8;                   // definir variable de número de leds
int num = 0;                      // definir variable del número a mostrar

//********** Setup ****************************************************************
void setup()
{
  for(int i = 0; i < ledNum; i++) // definir els pins com sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
  pinMode(buttonPin2, INPUT);      // definir el pin 2 com una entrada
  pinMode(buttonPin3, INPUT);      // definir el pin 3 com una entrada
  for(int j = 0; j < ledNum ; j++)     // els leds mostren incialment 0
    { 
      digitalWrite(ledPin[j], 0);
    }
}

//********** Loop *****************************************************************
void loop()
{
  buttonEstat2 = digitalRead(buttonPin2);
  if (buttonEstat2 == HIGH)
  { 
    num = num + 1;                 // incrementar el número a mostrar
    if (num == 256)       // quan arribi a 255   
           {
              num = 0; //torna a 0
           }    
    for(int j = 0; j < ledNum ; j++)   // activa i desactiva els leds per tal de que mostrin els numeros 
    { 
      digitalWrite(ledPin[j], bitRead(num, j));
    }
    delay(500);    // per evitar que en una pulsació curta salti més d'un número 
  }

  buttonEstat3 = digitalRead(buttonPin3);
  if (buttonEstat3 == HIGH)
  { 
    num = num - 1;                 // decrementa el número a mostrar
    if (num < 0)       // quan arriba a 0 
           {
              num = 255; //mostra 255
           }     
    for(int j = 0; j < ledNum ; j++)   
    { 
      digitalWrite(ledPin[j], bitRead(num, j)); 
    }
    delay(500);    // per evitar que en una pulsació curta salti més d'un número 
  }
}

//********** Funcions *************************************************************
