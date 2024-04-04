int x = 0;
int knopf_vorher = 1;
int knopf_jetzt = 1;

void setup(){
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  knopf_vorher = digitalRead(2);
}

void loop(){
  
  if(digitalRead(2) == 0){
    x = x + 1;
  }
  Serial.println(x);
}
