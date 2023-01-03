int ledPin = 9;
int ldrPin = A0;

int ldrStatus=0;

void setup() { 

  Serial.begin(9600);
  pinMode(ldrPin,INPUT);
  pinMode(ledPin,OUTPUT);

}

void loop() {

  ldrStatus = analogRead(ldrPin);

  if (ldrStatus < 823) {

    digitalWrite(ledPin,HIGH);

    Serial.print("LDR value:");
    Serial.print(ldrStatus);
    Serial.print(",LED Status 1");
    Serial.println();
    
  } 
  
  else {

    digitalWrite(ledPin,LOW);

    Serial.print("LDR value:");
    Serial.print(ldrStatus);
    Serial.print(",LED Status 0");
    Serial.println();
    
  }

  delay(250);

}
