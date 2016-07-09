void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(4, INPUT_PULLUP);
}

int s_neu = 0;
int s_alt = 0;
void loop() {
   s_neu = !digitalRead(4);

   if((s_alt == 0) && (s_neu == 1)){
      digitalWrite(2, 1);
   }
   
   Serial.println(s_neu);
   
   s_alt = s_neu;
}
