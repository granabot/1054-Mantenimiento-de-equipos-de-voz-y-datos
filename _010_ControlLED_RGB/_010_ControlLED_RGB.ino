#define Rojo 5
#define Verde 6
#define Azul 3
void setup() { //Configuraciones. Pines 3, 5 y 6 como salida
  pinMode(Rojo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(Azul, OUTPUT);
}
void loop() {
  int red, green, blue; //Variables bucles color
   //Bucle cambio azul a violeta
  for (red = 0; red < 256; red++) {
    analogWrite(Rojo, red);
    delay(20);
  }
  //Bucle cambio violeta a rojo
  for (blue = 255; blue > 0; blue--) { 
    analogWrite(Azul, blue);
    delay(20);
  }
  //Bucle cambio rojo a amarillo
  for (green = 0; green < 256; green++) {
    analogWrite(Verde, green);
    delay(20);
  }
  //Bucle cambio amarillo a verde
  for (red = 255; red > 0; red--) { 
    analogWrite(Rojo, red);
    delay(20);
  }
  //Bucle cambio verde a azul
  for (blue = 0; blue < 256; blue++) {
    analogWrite(Azul, blue);
    delay(20);
  }
  //Bucle cambio cian a azul
  for (green = 255; green > 0; green--) { 
    analogWrite(Verde, green);
    delay(20);
  }
}
