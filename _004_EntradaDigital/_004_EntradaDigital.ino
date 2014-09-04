int pulsadorE=2;  //Indicamos el pin al que va el pulsador de entrada
int ledS=9; //Pin donde se encuentra el LED de salida 

void setup(){ // Configuraciones
  pinMode(pulsadorE, INPUT); //Configurar pin 2 como entrada
  pinMode(ledS,OUTPUT); //Configurar pin 9 como salida
} 
void loop(){
 //Condicional para saber estado del pulsador 
 if (digitalRead(pulsadorE)==HIGH) //Pulsador NO accionado
   {  
   digitalWrite(ledS,HIGH); //Enciende el LED 
   } 
   else //Pulsador accionado 
   { 
   digitalWrite(ledS,LOW); //Apaga el LED 
   } 
 }
