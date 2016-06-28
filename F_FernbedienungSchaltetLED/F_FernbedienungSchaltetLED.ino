#include <IRremote.h>

IRrecv irrecv(5);
decode_results results;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(2, OUTPUT);
}

void loop() {
  if(irrecv.decode(&results)){
    Serial.println(results.value, HEX);
    if(results.value == 0xFF6897){
       digitalWrite(2, HIGH);
    }
    if(results.value == 0xFF4AB5){
       digitalWrite(2, LOW);
    }
    irrecv.resume();
  }
}
