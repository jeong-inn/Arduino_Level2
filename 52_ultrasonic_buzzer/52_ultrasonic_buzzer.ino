#define TRIG D9
#define ECHO D8

int buzzer = D6;
int i;

void setup(){
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(115200);
  }

void loop(){
  long duration, distance;
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(2);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH);
  distance = duration * 17 / 1000;

  Serial.println(distance);
  
  if(distance < 15){
    for(i = 0; i < 80; i++){
      digitalWrite(buzzer, HIGH);
      delay(1);
      digitalWrite(buzzer, LOW);
      delay(1);
      }
    }
  }
