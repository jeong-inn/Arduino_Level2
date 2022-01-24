#include "oled_u8g2.h"

OLED_U8G2 oled;

void setup(){
  oled.setup();
  }

void loop(){
  
  oled.setLine(2, "HelloWorld");
  oled.display();
  }
