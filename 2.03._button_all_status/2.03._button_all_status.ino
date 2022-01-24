int button_red = D6;
int button_blue = D7;
int button_green = D8;
int button_yellow = D9;

void setup(){
  Serial.begin(115200);
  pinMode(button_red, INPUT);  
  pinMode(button_blue, INPUT);
  pinMode(button_green, INPUT);
  pinMode(button_yellow, INPUT);

  }

void loop(){
  int button_red_status = digitalRead(button_red);
  int button_blue_status = digitalRead(button_blue);
  int button_green_status = digitalRead(button_green);
  int button_yellow_status = digitalRead(button_yellow);

  if(button_red_status == LOW)
    Serial.println("빨강 버튼이 눌림");
  
  if(button_blue_status == LOW)
    Serial.println("파랑 버튼이 눌림");
    
  if(button_green_status == LOW)
    Serial.println("초록 버튼이 눌림");
  
  if(button_yellow_status == LOW)
    Serial.println("노랑 버튼이 눌림");
  
  Serial.print(button_red_status);
  Serial.print(" ");
  Serial.print(button_blue_status);
  Serial.print(" ");
  Serial.print(button_green_status);
  Serial.print(" ");
  Serial.println(button_yellow_status);

  delay(100);
  }
