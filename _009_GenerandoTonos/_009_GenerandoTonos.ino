int Pinbuzzer = 9;  //Declara Pin conexion buzzer
int PinVar = 0;    //Declara Pin de la resistencia variable
void setup()
{
}
void loop() 
{  
  int Rvar = analogRead(PinVar); //Valor Rvar
  int frecuencia = map(Rvar,0,1023,100,5000); //Mapeamos valores leidos
  int duracion = 250;
  tone(Pinbuzzer, frecuencia, duracion);
  delay(100);
}
