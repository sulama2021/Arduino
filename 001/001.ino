/**********************************************************************************
**                                                                               **
**                                Cub de leds                                    **
**                                                                               **
** NOM:                                                                     DATA:**
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int leds[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
int trans[] = {11, 12, 13};
int i;
int j;
int temps = 500;

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

 
    for (int j = 0; j < 4; j ++ ){ //al primer cicle encén el primer transistor, al segon el segon...
        digitalWrite (trans[j], HIGH); //encén el transistor
        for (int i = 0; i < 10; i ++ ){ //al primer cicle encén el primer led, al segon el segon...
            digitalWrite(leds[i], HIGH); //encén el led
            delay(temps);
            digitalWrite(leds[i], LOW); //apaga el led
        }
        digitalWrite (trans[j], LOW); //apaga el transistor
    }
    delay(temps); //delay
}
//********** Funcions *************************************************************
