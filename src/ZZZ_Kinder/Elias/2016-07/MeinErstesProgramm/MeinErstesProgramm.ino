void setup () {
  while(1){
   pinMode(4, OUTPUT);
   pinMode(2, OUTPUT);
   pinMode(5, OUTPUT);  
   pinMode(3, OUTPUT);
   pinMode(6, OUTPUT);
 
   digitalWrite(5, LOW);
   digitalWrite(4, LOW);
   digitalWrite(3, LOW);
   digitalWrite(2, HIGH);
   digitalWrite(6, LOW);
   delay(80);

   digitalWrite(5,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(2,LOW);
   digitalWrite(4,LOW);
   digitalWrite(6,LOW);
   delay(80);

   digitalWrite(5,LOW);
   digitalWrite(2,LOW);
   digitalWrite(4,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(6,LOW);
   delay(80);

    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(6,LOW);
 delay(80);

   digitalWrite(6,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(4,LOW);
   digitalWrite(3,LOW);
   digitalWrite(2,LOW);
 delay(80);

}
}
 void loop() {
      
}

