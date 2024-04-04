void setup(){
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  int x = analogRead(0);
  Serial.println(x);


  if(x > 1020){
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
  }

  if(x < 900){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  }

}
