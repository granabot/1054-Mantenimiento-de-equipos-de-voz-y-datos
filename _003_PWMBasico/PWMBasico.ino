int Pin9 = 9; //Nombramos Pin 9
void setup() //Configuraciones
{
  //No hay que hacer ninguna configuración para este ejemplo
}
void loop() //Bucle infinito
{
  for(int i=0; i<=255; i=i+3)
  {
  analogWrite(Pin9,i); //Enciende progresivamente el LED
  delay(40); 
  }
  for(int i=255; i>=0; i=i-3)
  {
  analogWrite(Pin9,i); //Apaga progresivamente el LED
  delay(40); 
  }  
}

