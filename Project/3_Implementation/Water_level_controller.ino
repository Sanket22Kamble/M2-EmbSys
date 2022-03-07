#include <NewPing.h>
#include <Servo.h>
#define trigPin 12
#define echoPin 13
#define MAX_DISTANCE 50
NewPing sonar (trigPin, echoPin, MAX_DISTANCE);

Servo myservo;
int LED_GREEN = 3;
int LED_RED = 2;

void setup() {
  Serial.begin (115200);
  pinMode (trigPin, OUTPUT);
  pinMode (echoPin, INPUT);
  pinMode (LED_GREEN, OUTPUT);
  pinMode (LED_RED, OUTPUT);
  myservo.attach (9);
}

void loop() {
  int duration , distance , location=0,i;
  digitalWrite (trigPin,LOW);
  delayMicroseconds (2);
  digitalWrite (trigPin,HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin,LOW);
  duration = pulseIn (echoPin,HIGH);
  distance = (duration/2) / 29.1;
  Serial.print (distance);
  Serial.println (" cm");
  if (distance <= 5) {
    digitalWrite (LED_RED,LOW);
    digitalWrite (LED_GREEN,HIGH);
    myservo.write (180);
  }
  else {
    digitalWrite (LED_GREEN,LOW);
    digitalWrite (LED_RED,HIGH);
    myservo.write (90);
  }
  delay (450);
}