const int analogInPin = A0;
const int analogOutPin = 9;

int sensorValue = 0;
int outputValue = 0;


void setup() {

  Serial.begin(9600);

}

void loop() {
  
  // read analog value as 10 bit
  sensorValue = analogRead(analogInPin);

  // change range from 10 bit to 8 bit
  outputValue = map(sensorValue, 0, 1023, 0, 255);

  // write analog value as 8 bit
  analogWrite(analogOutPin, outputValue);

  Serial.print("Value: ");
  Serial.print(sensorValue);
  Serial.print("\t OutputValue: ");
  Serial.print(outputValue);
  Serial.println();
  delay(50);

}
