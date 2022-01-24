int button_red = D6;
int button_blue = D7;

void setup(){
  Serial.begin(115200);
  pinMode(button_red, INPUT);
  pinMode(button_blue, INPUT);
  }

void loop(){
  int button_red_status = digitalRead(button_red);
  int button_blue_status = digitalRead(button_blue);

  if(button_red_status == LOW)
    Serial.println("빨강 버튼이 눌림");
  if(button_blue_status == LOW)
    Serial.println("파랑 버튼이 눌림");

  Serial.print(button_red_status);
  Serial.print(" ");
  Serial.println(button_blue_status);

  delay(100);

  }
