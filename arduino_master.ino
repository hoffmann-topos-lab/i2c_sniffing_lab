#include <Wire.h>

void setup() {
  Wire.begin();  // Inicializa o I2C como master
}

void loop() {
  // Envia comando para acender o LED vermelho
  Wire.beginTransmission(8);  // Endereço do slave
  Wire.write(1);              // Comando para LED vermelho
  Wire.endTransmission();
  delay(3000);                // Mantém o LED aceso por 3 segundos

  // Envia comando para acender o LED verde
  Wire.beginTransmission(8);
  Wire.write(2);              // Comando para LED verde
  Wire.endTransmission();
  delay(3000);                // Mantém o LED aceso por 3 segundos

  // Envia comando para acender o LED amarelo
  Wire.beginTransmission(8);
  Wire.write(3);              // Comando para LED amarelo
  Wire.endTransmission();
  delay(1500);                // Mantém o LED aceso por 1.5 segundos
}

