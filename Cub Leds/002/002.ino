/**********************************************************************************
**                                                                               **
**                                Cub de leds                                    **
**                                                                               **
** NOM:                                                                     DATA:**
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int trans[] = {11, 12, 13};
int leds[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
int RandomTrans;     //variable pis aleatori
int RandomLeds;  //Variable columna aleatoria
int i;
int temps = 250;

//********** Setup ****************************************************************
void setup(){
 Serial.begin(9600);

 for (int i = 0; i < 4; i ++ ){ //repetim aquest programa fins que tota l'arrai es posa a 0
        pinMode(trans[i], OUTPUT); //determinem els pins de sortida 
        digitalWrite(trans[i], LOW); //posem els pins a 0
    }
   
    for (int i = 0; i < 10; i ++ ){ //repetim aquest programa fins que tota l'arrai es posa a 0
        pinMode(leds[i], OUTPUT);  //determinem els pins de sortida 
        digitalWrite(leds[i], LOW); //posem els pins a 0
    }
}
//********** Loop *****************************************************************
void loop(){
  


  RandomTrans = random(0,3); //crea un numero random del 0 al 3
  RandomLeds = random(0,9); //crea un numero random del 0 al 9
 
  digitalWrite(trans[RandomTrans], HIGH); //posa en high el pin del numero random que ha sortit del 0 al 3
  digitalWrite(leds[RandomLeds], HIGH); // posa en high el pin del numero random que ha sortit del 0 al 9
 
  delay(temps);
 
  digitalWrite(trans[RandomTrans], LOW); //posa en low el pin del numero random que ha sortit del 0 al 3
  digitalWrite(leds[RandomLeds], LOW);  // posa en low el pin del numero random que ha sortit del 0 al 9
 
  delay(temps);
}
//********** Funcions *************************************************************
