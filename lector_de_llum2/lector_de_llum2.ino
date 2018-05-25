/**********************************************************************************
**                                                                               **
**                              Lector de Llum                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

const int ldr0 = A0;         // donar nom al pin A0 de l’Arduino
const int ldr1 = A1;         // donar nom al pin A1 de l’Arduino
const int ldr2 = A2;         // donar nom al pin A2 de l’Arduino

int valLdr0, valLdr1, valLdr2;     // per guardar valors del ldrs

//********** Setup ****************************************************************
void setup()
{
  Serial.begin (9600);
    pinMode(ldr0, INPUT);     // definir el pin 9 com una sortida
    pinMode(ldr1, INPUT);     // definir el pin 9 com una sortida
   pinMode(ldr2, INPUT);     // definir el pin 9 com una sortida
   
  
}
//********** Loop *****************************************************************
void loop()
{
  
  int valLdr0 = analogRead(ldr0);   // llegir valor ldr0
   Serial.print ("El valor es= ");
  Serial.println (valLdr0);
 
  
  int valLdr1 = analogRead(ldr1);   // llegir valor ldr1
  Serial.print ("El valor es= ");
  Serial.println (valLdr1);
  

  int valLdr2 = analogRead(ldr2);   // llegir valor 
  Serial.print ("El valor es= ");
  Serial.println (valLdr2);
  Serial.println ("    ");
   delay(1500);
  


 
 
 
 
}

//********** Funcions *************************************************************

