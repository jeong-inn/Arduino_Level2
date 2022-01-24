int sensor = A1;
int led_red = D2;
int brightness = 0;

void setup(){
  Serial.begin(115200);
  ledcSetup(0, 4000, 8);
  ledcAttachPin(led_red, 0);
  }

void loop(){
  int sensor_result = analogRead(sensor);
  brightness = map(sensor_result, 0, 4095, 255, 0);
  Serial.println(brightness);
  ledcWrite(0, brightness);
  }
