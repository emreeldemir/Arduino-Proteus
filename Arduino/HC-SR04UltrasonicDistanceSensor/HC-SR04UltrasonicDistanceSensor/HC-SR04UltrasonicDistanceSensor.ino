#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
unsigned long myTime;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

const int trigPin = 9;
const int echoPin = 10;

long duration;
int distanceCm;
int distanceInch;



void setup() {

  lcd.begin(16,2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distanceCm = duration * 0.034/2;
  distanceInch = duration * 0.0133/2;

  lcd.setCursor(0,0);
  lcd.print("Distance: ");
  lcd.print(distanceCm);
  lcd.print(" cm");
  
  lcd.setCursor(0,1);
  lcd.print("Distance: ");
  lcd.print(distanceInch);
  lcd.print(" inch");

  delay(250);

}
