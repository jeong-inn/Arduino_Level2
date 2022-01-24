int sensor = A2;

void setup(){
  Serial.begin(115200);
  
  }

void loop(){
  int result = analogRead(sensor);
  Serial.println(result);
  delay(200);
  }
