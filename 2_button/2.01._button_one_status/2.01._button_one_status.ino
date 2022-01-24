int button_red = D6;

void setup(){
  Serial.begin(9600);
  pinMode(button_red, INPUT);
}

void loop(){
  int button_red_status = digitalRead(button_red);

  if(button_red_status == LOW)
    Serial.println("버튼이 눌림");
  else
    Serial.println("버튼이 눌리지 않음");
  
  delay(100);
  }
