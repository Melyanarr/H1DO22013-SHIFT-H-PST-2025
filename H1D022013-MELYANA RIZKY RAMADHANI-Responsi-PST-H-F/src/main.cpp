#include <Arduino.h>
#include <Servo.h>

#int trigPin= D0;
#int echoPin = D1;
#int servoPin = D2;

Servo myservo;

long duration;
int distance;
bool palangTerbuka = false;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myservo.attach(servoPin);
  myservo.write(0);
}

void loop() {
  digitalWrite(trigPinN, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = durasi * 0.034 / 2;

  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= 15 && !palangTerbuka) {
    myservo.write(90);
    palangTerbuka = true;
    delay(2000);
  } else if (jarak > 15 && palangTerbuka) {
    myservo.write(0);
    palangTerbuka = false;
    delay(500);
  }

  delay(100);
}