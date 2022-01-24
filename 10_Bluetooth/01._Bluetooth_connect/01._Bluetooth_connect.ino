#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

char names[] = "jeong-inn";

void setup(){
  Serial.begin(115200);
  SerialBT.begin(names);
  
  while(!SerialBT.connected(1000)){
    Serial.println("연결되지 않았습니다.");
    }
  delay(1000);

  String message = names + String(" : 연결에 성공했습니다!");
  Serial.println(message);
  SerialBT.println(message.c_str());
  }

void loop(){}
  
