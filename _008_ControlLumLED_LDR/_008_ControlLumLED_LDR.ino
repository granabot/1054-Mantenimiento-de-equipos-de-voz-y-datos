void setup() // Configuraciones
{
Serial.begin(9600); //Inicializa comunicación serie
pinMode(9,OUTPUT); //Configurar el pin 9 como salida
}
void loop() 
{ 
int LDR = analogRead(A0); //Guarda valor lectura analógica LDR
int adapta = 900 - LDR; //Adaptacion valor lectura
if ( adapta < 0) //Valor absoluto
adapta = adapta * -1; 
Serial.print("Lectura LDR: "); //Mostrar en Monitor
Serial.print(LDR);
Serial.println("");
Serial.print("Adaptación valor lectura LDR: ");
Serial.print(adapta);
Serial.println("");
analogWrite(9, adapta); //Escritura PWM en LED
delay(100); 
}
