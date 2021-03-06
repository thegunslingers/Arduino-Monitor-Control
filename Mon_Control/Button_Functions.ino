extern int samsungTest;
extern int asusTest;

/*Use this to push most buttons on the monitor
Power button for example*/
void PushButtonAsus(int pin){
   digitalWrite(pin, HIGH);
   if(asusTest == 1){
       Serial.println("Pressing Asus Pin:" + pin);
   }
   delay(1500);
   digitalWrite(pin, LOW);
 }
/*The input and Scene button must be 
pushed twice to have effect */
void PushButtonAsusDouble(int pin){
   digitalWrite(pin, HIGH);
   delay(1500);
   digitalWrite(pin, LOW);
   delay(500);
   if(asusTest == 1){
       Serial.println("Pressing Asus button on Pin:" + pin);
   }
   digitalWrite(pin, HIGH);
   delay(1500);
   digitalWrite(pin, LOW);
}

void PushButtonPowerSamsung(const int pin) {
    digitalWrite(pin, HIGH);
   if(samsungTest == 1){
       Serial.println("Pressing Samsung Power Pin:" + pin);
   }
    delay(1000);
    digitalWrite(pin, LOW);
}
 
 
 void PushButtonInputSamsung(const int pin) {
    PushButtonInputtSamsung(pin);
    delay(1000);
    ReleaseButtonInputSamsung(pin);
}
 
//Pushes the Input Button after multiplexing
void PushButtonInputtSamsung(const int pin) {
    digitalWrite(pin, LOW);
    pinMode(pin, OUTPUT);  // Drive the signal line LOW (Ground)
}
void ReleaseButtonInputSamsung(const int pin) {
   if(samsungTest == 1){
       Serial.println("Pressing Asus Pin:" + pin);
   } 
   pinMode(pin, INPUT);   // Puts the pin in a high-impedance (near open circuit) state.
}
