#include <Wire.h>

const int ledRed = 2;      // LED vermelho no pino 2
const int ledYellow = 3;   // LED amarelo no pino 3
const int ledGreen = 4;    // LED verde no pino 4
int ledCommand = 0;

void setup() {
  Wire.begin(8);  // Inicializa o Slave com endereço 8
  Wire.onReceive(receiveEvent);  // Define a função para receber dados

  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  // Nada aqui, pois o controle é feito pela função de recebimento
}

void receiveEvent(int bytes) {
  ledCommand = Wire.read();  // Lê o comando enviado

  // Apaga todos os LEDs
  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledGreen, LOW);

  // Acende o LED correspondente
  if (ledCommand == 1) {
    digitalWrite(ledRed, HIGH);
  } else if (ledCommand == 2) {
    digitalWrite(ledGreen, HIGH);
  } else if (ledCommand == 3) {
    digitalWrite(ledYellow, HIGH);
  }
}




