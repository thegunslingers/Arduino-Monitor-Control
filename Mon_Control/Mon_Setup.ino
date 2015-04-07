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
