#include "oled_u8g2.h"

int TRIG = D9;
int ECHO = D8;
OLED_U8G2 oled;

void setup(){
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  oled.setup();
  Serial.begin(115200);
  }

void loop(){
  long duration, distance;
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);  
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(2);
  digitalWrite(TRIG, LOW);
 
  duration = pulseIn(ECHO, HIGH);
  distance = duration * 17 / 1000;

  oled.setLine(2, " ");

  if(distance>0)
    oled.setLine(2, "danger !");
  if(distance > 20)
    oled.setLine(2, "warning !");
  if(distance > 30)
    oled.setLine(2, "safe !");
  Serial.println(distance);
  oled.display(); 
  }
