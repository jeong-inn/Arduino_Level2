#include <Servo.h>

int TRIG = D9;
int ECHO = D8;
static const int servoPin = D2;

Servo servo;

void setup(){
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  servo.attach(servoPin);
  Serial.begin(115200);
  }

void loop(){
  long duration, distance;

  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(2);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH);
  distance = duration * 17 / 1000;

  if(distance < 20)
    servo.write(180);
  if(distance >= 20)
    servo.write(0);  
  }
