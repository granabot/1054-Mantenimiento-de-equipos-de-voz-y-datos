void setup() //Configuraciones
{
  pinMode(12,OUTPUT); //Hace pin 12 salida
}
void loop() //Bucle
{
  digitalWrite(12,HIGH); //Enciende LED
  delay(500); //Retardo medio segundo
  digitalWrite(12,LOW); //Apaga LED
  delay(500);
}
