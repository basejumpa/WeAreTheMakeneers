void setup() {
  pinMode(3, OUTPUT);
}

int a = 1;
void loop() {
   a = 1;
   digitalWrite(3, a);
   delay(2000);
   a = 0;
   digitalWrite(3, a);
   delay(2000);
}
