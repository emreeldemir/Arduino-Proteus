int ledArray[] = {4,5,6,7,8,9,10,11};
int delayTime = 50;


void setup() {
  
  for(int i=0; i<8; i++){
    pinMode(ledArray[i],OUTPUT);
  }

}

void loop() {

  for(int i=0;i<8;i++){
    blinkLed(ledArray[i]);
  }

  for(int i=7;i>=0;i--){
    blinkLed(ledArray[i]);
  }

}

void blinkLed(int pinNr){

    digitalWrite(pinNr,HIGH);
    delay(delayTime);

    digitalWrite(pinNr,LOW);
    delay(delayTime);
}
