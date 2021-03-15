int finger1 = 2;
int finger2 = 3;
int finger3 = 4;
int finger4 = 5;
int finger5 = 6;
int finger6 = 7;
int finger7 = 8;
int finger8 = 9;

void setup() {

Serial.begin(31250);  
  
pinMode(finger1, INPUT);
digitalWrite(finger1, HIGH);
pinMode(finger2, INPUT);
digitalWrite(finger2, HIGH);  
pinMode(finger3, INPUT);
digitalWrite(finger3, HIGH);  
pinMode(finger4, INPUT);
digitalWrite(finger4, HIGH);
pinMode(finger5, INPUT);
digitalWrite(finger5, HIGH);  
pinMode(finger6, INPUT);
digitalWrite(finger6, HIGH);  
pinMode(finger7, INPUT);
digitalWrite(finger7, HIGH);  
pinMode(finger8, INPUT);
digitalWrite(finger8, HIGH);

}

void loop() {

int finger1State = digitalRead(finger1);
int finger2State = digitalRead(finger2);
int finger3State = digitalRead(finger3);
int finger4State = digitalRead(finger4);
int finger5State = digitalRead(finger5);
int finger6State = digitalRead(finger6);
int finger7State = digitalRead(finger7);
int finger8State = digitalRead(finger8);

if (finger1State == 0) {
  noteOn(0x90, 0x30, 0x3c);
  
}

else noteOff;

if (finger2State == 0) {
  noteOn(0x90, 0x32, 0x3c);
}

if (finger3State == 0) {
  noteOn(0x90, 0x34, 0x3c);
}



}

void noteOn(int cmd, int pitch, int velocity) {
  Serial.write(cmd);
  Serial.write(pitch);
  Serial.write(velocity);
}

void noteOff(int cmd, int pitch, int velocity){
  Serial.write(cmd);
  Serial.write(pitch);
  Serial.write(velocity);
}
