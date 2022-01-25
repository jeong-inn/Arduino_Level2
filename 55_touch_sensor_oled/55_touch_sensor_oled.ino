#include "oled_u8g2.h"

OLED_U8G2 oled;
int sensor = D6;

void setup(){
  Serial.begin(115200);
  oled.setup();
  pinMode(sensor, INPUT);
  }

void loop(){
  int sensor_result = digitalRead(sensor);

  oled.setLine(2, " ");
  if(sensor_result == 1)
    oled.setLine(2, "touch");
  oled.display();
  }
