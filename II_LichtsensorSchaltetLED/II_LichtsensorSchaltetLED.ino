void setup(){
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

int a = 0;
void loop() {
   a = analogRead(0);

   if(a <= 195){
      digitalWrite(2, 1);
   }else{
      digitalWrite(2, 0);
   }
   
   Serial.println(a);
}

