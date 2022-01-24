int sensor = A0;
int led_red = D2;
int brightness = 0;

void setup(){
  Serial.begin(115200);
  ledcAttachPin(led_red, 0);
  ledcSetup(0, 4000, 8);
  }

void loop(){
  brightness = map(analogRead(sensor), 0, 4095, 0, 255);
  Serial.println(brightness);
  ledcWrite(0, brightness);
  }
