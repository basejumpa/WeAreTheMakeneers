#include <Servo.h>

Servo servo;
int nullStellung;

void setup() {
  // Servo ist an Pin 5
  servo.attach(5);

  // Nullstellung des Servos merken
  nullStellung = servo.read();

  // Tongeber an D2
  pinMode(2, OUTPUT);
}

void loop() {
  // Auf Ball warten (solange der Lichtwert größer als 100 ist)
  while(analogRead(0) > 100){}

  // Tonsignal geben
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);

  // Schießen
  servo.write(180);
  delay(1000);
  servo.write(0);
  delay(1000);
  servo.write(nullStellung);
}

