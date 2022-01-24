int sensor = A0;
int led_red = D2;
int led_blue = D3;
int led_green = D4;
int led_yellow = D5;

void setup(){
  pinMode(led_red, OUTPUT);
  pinMode(led_blue, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);

  Serial.begin(115200);
  }

void loop(){
  int sensor_result = analogRead(sensor);

  digitalWrite(led_red, LOW);  
  digitalWrite(led_blue, LOW);
  digitalWrite(led_green, LOW);
  digitalWrite(led_yellow, LOW);

  if(sensor_result > 500)
    digitalWrite(led_red, HIGH);
    
  if(sensor_result > 1000)
    digitalWrite(led_blue, HIGH);
    
  if(sensor_result > 1500)
    digitalWrite(led_yellow, HIGH);
    
  if(sensor_result > 2000)
    digitalWrite(led_green, HIGH);
  }
