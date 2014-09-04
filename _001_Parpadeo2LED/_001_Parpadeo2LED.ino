//  Parpadeo de dos LED el interno del pin 13 y uno externo conectado al pin 12
int led13 = 13;
int led12 = 12;
// the setup routine runs once when you press reset:
void setup() {                
  // Configuramos los dos pines como salida
  pinMode(led13, OUTPUT); 
  pinMode(led12, OUTPUT);  
}

void loop() {
  digitalWrite(led13, HIGH);   //LED interno encendido
  digitalWrite(led12, LOW);    //LED externo apagado
  delay(1000);                 // wait for a second
  digitalWrite(led13, LOW);    //LED interno apagado
  digitalWrite(led12, HIGH);   //LED externo encendido
  delay(1000);               // wait for a second
}
