void setup(){
   pinMode(5, OUTPUT);
}

void loop() {
   tone(5, 440);
   delay(1000);
   noTone(5);
   delay(500);
}
