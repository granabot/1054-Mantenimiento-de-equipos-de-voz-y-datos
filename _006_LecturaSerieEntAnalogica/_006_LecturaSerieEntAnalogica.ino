void setup() 
{
  Serial.begin(9600); //Inicialización de la comunicación serie
}
void loop() 
{ 
int lectura= analogRead(A0);//Guarda el valor del potenciómetro (entre 0 y 1023)
Serial.println("Resistencia ajustada a:"); //Imprime en Monitor serial la cadena
Serial.println(lectura); //Imprime en Monitor serial el valor de la variable
delay(3000);//Retardo para la visualización de datos en Monitor serial
}
