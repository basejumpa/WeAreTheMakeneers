#include "Bounce2.h"

Bounce schalter;
void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  schalter.attach(2);
}

int led = 0;
void loop() {
  schalter.update();
  if(schalter.rose()){
    //led = !led;
    if(led == 0){
      led = 1;
    }else{
      led = 0;
    }
  }

  //schalter.fell() gibt es auch
  digitalWrite(3, led);
  Serial.println(led);
}

