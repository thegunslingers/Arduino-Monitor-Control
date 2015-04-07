 /* Samsung Monitor Buttons Test */
void SamsungMontTest(){
 //delay(7000);
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
