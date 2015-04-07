/*Use this to push most buttons on the monitor
Power button for example*/
void PushButtonAsus(int pin){
   digitalWrite(pin, HIGH);
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
   digitalWrite(pin, HIGH);
   delay(1500);
   digitalWrite(pin, LOW);
}

void PushButtonPowerSamsung(const int pin) {
    digitalWrite(pin, HIGH);
    delay(1000);
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
