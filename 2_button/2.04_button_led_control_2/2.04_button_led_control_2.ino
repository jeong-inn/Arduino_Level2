int led_red = D2;
int button_red = D6;

int button_red_value = 0;
int button_red_old_value = 1;
int led_red_status;

void setup(){
  Serial.begin(115200);
  pinMode(led_red, OUTPUT);
  pinMode(button_red, INPUT);
  }

void loop(){
  button_red_value = digitalRead(button_red);
  
  // LOW == 0, HIGH == 1
  if(button_red_value == LOW && button_red_old_value ==HIGH){
    led_red_status = !led_red_status;
    }
  button_red_old_value = button_red_value;
  if(led_red_status == HIGH){
    digitalWrite(led_red, HIGH);
    }
  else
    digitalWrite(led_red, LOW);
  }
