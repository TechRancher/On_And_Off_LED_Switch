/*
  On And Off LED With A Push Button 
  Learn more about this project by reading my readME.adoc 
*/
// Headers
// Define
// Variables
int LEDState = 0;
int bPin = 2;
int LEDPin = 4;
int btnNew;
int btnOld = 1;
int dT = 100;
// Functions

void setup() {
  // put your setup code here, to run once:
  pinMode(bPin, INPUT_PULLUP);
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  btnNew = digitalRead(bPin);
  if(btnOld == 0 && btnNew == 1){
    if(LEDState == 0){
      digitalWrite(LEDPin, HIGH);
      LEDState = 1;
    } else {
      digitalWrite(LEDPin, LOW);
      LEDState = 0;
    }
  }
  btnOld=btnNew;
  delay(dT);
}
