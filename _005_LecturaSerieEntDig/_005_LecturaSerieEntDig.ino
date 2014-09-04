int pulsador=2; //Pin donde se encuentra el pulsador
//Configuraciones
void setup() 
{
  pinMode(pulsador,INPUT); //Configurar el pulsador como entrada
  Serial.begin(9600); //Inicialización de la comunicación serie
}
void loop()
{ 
  //Guardamos en una variable entera el valor del pulsador
  int estadopulsador = digitalRead(pulsador);
  if (estadopulsador==1)// No esta pulsado
  {
    Serial.println("Pulsador NO accionado"); //Escribe en el Monitor serial
  } 
  else // Pulsado
  {
    Serial.println("Pulsador accionado"); //Escribe en el Monitor serial
  } 
  delay(1000); //Retardo para la visualización el Monitor serial
}
