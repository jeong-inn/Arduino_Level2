#include "BluetoothSerial.h"

#define led_red D2
#define led_blue D3
#define led_green D4
#define led_yellow D5

BluetoothSerial SerialBT;

char names[] = "jeong-inn";
int sensor = A1;

void setup(){
  Serial.begin(115200);
  SerialBT.begin(names);
  pinMode(led_red , OUTPUT);  
  pinMode(led_blue , OUTPUT);
  pinMode(led_green , OUTPUT);
  pinMode(led_yellow , OUTPUT);

  
  while(!SerialBT.connected(1000)){
    Serial.println("연결되지 않았습니다.");
    }
  delay(1000);

  String message = names + String(" : 연결에 성공했습니다!");
  Serial.println(message);
  SerialBT.println(message.c_str());
  }

void loop(){
  char cmd = -1;
  if(SerialBT.available()){
    cmd = (char)SerialBT.read();
    Serial.print("입력값 = ");
    Serial.println(cmd);
  }
  if(cmd == '1'){
    Serial.println("red on!");
    digitalWrite(led_red, HIGH);
    }
  else if(cmd == '2'){
    Serial.println("red off!");
    digitalWrite(led_red, LOW);
    }  
  else if(cmd == '3'){
    Serial.println("blue on!");
    digitalWrite(led_blue, HIGH);
    }
  else if(cmd == '4'){
    Serial.println("blue off!");
    digitalWrite(led_blue, LOW);
    }
   else if(cmd == '5'){
    Serial.println("green on!");
    digitalWrite(led_green, HIGH);
    }
  else if(cmd == '6'){
    Serial.println("green off!");
    digitalWrite(led_green, LOW);
    }
  else if(cmd == '7'){
    Serial.println("yellow on!");
    digitalWrite(led_yellow, HIGH);
    }
  else if(cmd == '8'){
    Serial.println("yellow off!");
    digitalWrite(led_yellow, LOW);
    }
  else if(cmd == '9'){
    Serial.println("all off");
    digitalWrite(led_red, LOW);
    digitalWrite(led_blue, LOW);
    digitalWrite(led_green, LOW);
    digitalWrite(led_yellow, LOW);
    }
  else{}
  delay(20);
  }
  
