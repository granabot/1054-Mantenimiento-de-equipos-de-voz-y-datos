int Pin9 = 9; //Nombramos Pin 9
void setup() //Configuraciones
{
  pinMode(Pin9, OUTPUT); //Configurar el pin 9 como salida
}
void loop() //Bucle infinito
{
  int LecturaAnalogica = analogRead(0); //Guardamos en variable la lectura analógica
  LecturaAnalogica = map(LecturaAnalogica, 0, 1023, 0, 255); //Mapeamos la variable
  analogWrite(Pin9, LecturaAnalogica);//Escribimos en valor en el LED
}

