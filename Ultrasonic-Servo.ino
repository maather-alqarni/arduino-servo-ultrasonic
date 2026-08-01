
#include <Servo.h>

Servo myServo;

// Pins
const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 6;
const int ledPin = 13;

// Settings
const int activationDistance = 10;  // cm
const int originalAngle = 0;
const int targetAngle = 90;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);

  myServo.attach(servoPin);
  myServo.write(originalAngle);

  Serial.begin(9600);
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);

  float distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance <= activationDistance) {

    myServo.write(targetAngle);
    digitalWrite(ledPin, HIGH);

  } 
  else {

    myServo.write(originalAngle);
    digitalWrite(ledPin, LOW);
  }

  delay(100);
}