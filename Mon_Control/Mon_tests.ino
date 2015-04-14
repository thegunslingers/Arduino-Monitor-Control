 /* Samsung Monitor Buttons Test */
void SamsungMonTest(){
   //delay(7000);
   
   Serial.println("Samsung Monitor Test Starting:");
   
   PushButtonPowerSamsung(samsungPowerPin);
   delay(1500);
   PushButtonInputSamsung(samsungInputPin);
   delay(600);
   ReleaseButtonInputSamsung(samsungInputPin);  
   delay(1500);
}
//Notes: play with debounce time
// very safe delay to debounce sammy  delay(2500);
void AsusMonTest(){
  
   Serial.println("Asus Monitor Test Starting:");
  
  PushButtonAsus(asusTPower);
   //delay(3000);
  //PushButtonAsusDouble(asusTInput);
  //delay(3000);
  //PushButtonAsus(asusTMenu);
  //delay(3000);
  //PushButtonAsus(asusTUp);
  //delay(3000);
  //PushButtonAsus(asusTDown);
  //delay(3000);
  //PushButtonAsus(asusTOther);
  delay(1000);
}
