#include <Arduino.h>

int LED_MERAH = D2;
int LED_KUNING = D3;
int LED_HIJAU = D4;

void setup() {
  pinMode(LED_MERAH, OUTPUT);
  pinMode(LED_KUNING, OUTPUT);
  pinMode(LED_HIJAU, OUTPUT);
}

void loop() {
  digitalWrite(LED_MERAH, HIGH);
  delay(100);
  digitalWrite(LED_MERAH, LOW);
  digitalWrite(LED_KUNING, HIGH);
  delay(100);
  digitalWrite(LED_KUNING, LOW);
  digitalWrite(LED_HIJAU, HIGH);
  delay(100);
  digitalWrite(LED_HIJAU, LOW);
}

