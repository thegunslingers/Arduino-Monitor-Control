// Variables for Samsung Monitor
int samsungInputPin = 4;
int samsungPowerPin = 5;

//Variables for Thin Asus Monitor
int asusTPower = 6;
int asusTInput = 7;
int asusTMenu  = 8;
int asusTUp    = 9;
int asusTDown  = 10;
//????
int asusTOther = 11;

void setup() {
  pinMode(samsungPowerPin, OUTPUT);
  pinMode(samsungInputPin, INPUT);
  //digitalWrite(samsungInputPin, LOW);

  pinMode(asusTPower, OUTPUT);
  pinMode(asusTInput, OUTPUT);
  pinMode(asusTMenu, OUTPUT);
  pinMode(asusTUp, OUTPUT);
  pinMode(asusTDown, OUTPUT);
  pinMode(asusTOther, OUTPUT);
}

void loop() {
   
  //delay(1000);
  PushButtonAsus(asusTPower);
  //PushButtonAsus(asusTInput);
  //PushButtonAsus(asusTMenu);
  //PushButtonAsus(asusTUp);
  //PushButtonAsus(asusTDown);
  //PushButtonAsus(asusTOther);
  delay(1500);
 /* 
 delay(7000);
 digitalWrite(samsungPowerPin,HIGH);
 delay(1500);
 digitalWrite(samsungPowerPin,LOW);
 delay(1500);  
 digitalWrite(samsungPowerPin,HIGH);
 PushButtonInputSamsung(samsungInputPin);
// min delay to debounce sammy  delay(2500);
 delay(600);
 ReleaseButtonInputSamsung(samsungInputPin);  
 delay(1500);
*/
  
  
}
//Use this to push most buttons on the monitor
//Power button for example
void PushButtonAsus(int pin){
   digitalWrite(pin, HIGH);
   delay(1500);
   digitalWrite(pin, LOW);
 }
//The input button must be pushed twice to have effect 
void PushButtonAsusInput(int pin){
   digitalWrite(pin, HIGH);
   delay(1500);
   digitalWrite(pin, LOW);
   delay(500);
   digitalWrite(pin, HIGH);
   delay(1500);
   digitalWrite(pin, LOW);
}

//Pushes the Input Button after multiplexing
void PushButtonInputtSamsung(const int pin) {
    digitalWrite(pin, LOW);
    pinMode(pin, OUTPUT);  // Drive the signal line LOW (Ground)
}
void ReleaseButtonInputSamsung(const int pin) {
    pinMode(pin, INPUT);   // Puts the pin in a high-impedance (near open circuit) state.
}
