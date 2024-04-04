// LEDs und SCHALTER

void setup() {
  pinMode(2, OUTPUT);       // D2 als Ausgang konfigurieren
  pinMode(3, INPUT_PULLUP); // D3 als Eingang für Schalter konf.
  Serial.begin(9600);       // Konsole konfigurieren.
}

int a = 0;                 // Variable 'a' anlegen und gleich auf 0 setzen.

void loop() {
  digitalWrite(2, HIGH);   // D2 anschalten
  digitalWrite(2, 1);      // D2 anschalten (geht auch so)

  digitalWrite(2, LOW);    // D2 ausschalten
  digitalWrite(2, 0);      // D2 ausschalten (geht auch so)

  a = digitalRead(3);      // (Schalter-)Wert von Pin 3 lesen und in a abspeichern.
  Serial.println("Hallo"); // Hallo ausgeben auf dem Computer über die Konsole
  Serial.println(a);       // Den Wert, der in Variable a steht ausgeben auf der Konsole.
}
