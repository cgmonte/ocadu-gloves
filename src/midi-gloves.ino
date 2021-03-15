// load midi library:

#include <MIDI.h>

// finger variables:

int finger1 = 2;
int finger2 = 3;
int finger3 = 4;
int finger4 = 5;
int finger5 = 6;
int finger6 = 7;
int finger7 = 8;
int finger8 = 9;

// phalanges will be used for musical accidents:

int finger2ph = 10;
int finger3ph = 11;
int finger6ph = 12;
int finger7ph = 13;

// boolean variables for testing if note is on or off:

boolean finger1On = false;
boolean finger2On = false;
boolean finger3On = false;
boolean finger4On = false;
boolean finger5On = false;
boolean finger6On = false;
boolean finger7On = false;
boolean finger8On = false;

boolean finger2phOn = false;
boolean finger3phOn = false;
boolean finger6phOn = false;
boolean finger7phOn = false;

void setup() {
    
    MIDI.begin();;  // must be here for midi
    
    // pullups for each pin:
          
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
    
    pinMode(finger2ph, INPUT);
    digitalWrite(finger2ph, HIGH);  
    pinMode(finger3ph, INPUT);
    digitalWrite(finger3ph, HIGH);  
    pinMode(finger6ph, INPUT);
    digitalWrite(finger6ph, HIGH);  
    pinMode(finger7ph, INPUT);
    digitalWrite(finger7ph, HIGH);
    
}

void loop() {

/*here is the code to figure out if a finger 
is ON and then play a specific note until it's OFF:*/
 
    int finger1State = digitalRead(finger1);
    if (finger1State == 0 & finger1On == false) {
      MIDI.sendNoteOn(60,60,1);
      finger1On = !finger1On; }
    if (finger1State > 0 & finger1On == true) {
      MIDI.sendNoteOff(60,60,1);
      finger1On = !finger1On;}
    
    int finger2State = digitalRead(finger2);
    if (finger2State == 0 & finger2On == false) {
      MIDI.sendNoteOn(62,60,1);
      finger2On = !finger2On; }
    if (finger2State > 0 & finger2On == true) {
      MIDI.sendNoteOff(62,60,1);
      finger2On = !finger2On;}
    
    int finger3State = digitalRead(finger3);
    if (finger3State == 0 & finger3On == false) {
      MIDI.sendNoteOn(64,60,1);
      finger3On = !finger3On; }
    if (finger3State > 0 & finger3On == true) {
      MIDI.sendNoteOff(64,60,1);
      finger3On = !finger3On;}
    
    int finger4State = digitalRead(finger4);
    if (finger4State == 0 & finger4On == false) {
      MIDI.sendNoteOn(65,60,1);
      finger4On = !finger4On; }
    if (finger4State > 0 & finger4On == true) {
      MIDI.sendNoteOff(65,60,1);
      finger4On = !finger4On;}
    
    int finger5State = digitalRead(finger5);
    if (finger5State == 0 & finger5On == false) {
      MIDI.sendNoteOn(66,60,1);
      finger5On = !finger5On; }
    if (finger5State > 0 & finger5On == true) {
      MIDI.sendNoteOff(66,60,1);
      finger5On = !finger5On;}
     
    int finger6State = digitalRead(finger6);
    if (finger6State == 0 & finger6On == false) {
      MIDI.sendNoteOn(67,60,1);
      finger6On = !finger6On; }
    if (finger6State > 0 & finger6On == true) {
      MIDI.sendNoteOff(67,60,1);
      finger6On = !finger6On;}
    
    int finger7State = digitalRead(finger7);
    if (finger7State == 0 & finger7On == false) {
      MIDI.sendNoteOn(69,60,1);
      finger7On = !finger7On; }
    if (finger7State > 0 & finger7On == true) {
      MIDI.sendNoteOff(69,60,1);
      finger7On = !finger7On;}
    
    int finger8State = digitalRead(finger8);
    if (finger8State == 0 & finger8On == false) {
      MIDI.sendNoteOn(71,60,1);
      finger8On = !finger8On; }
    if (finger8State > 0 & finger8On == true) {
      MIDI.sendNoteOff(71,60,1);
      finger8On = !finger8On;}
      
    // phalanges: 
    
    int finger2phState = digitalRead(finger2ph);
    if (finger2phState == 0 & finger2phOn == false) {
      MIDI.sendNoteOn(61,60,1);
      finger2phOn = !finger2phOn; }
    if (finger2phState > 0 & finger2phOn ==   true) {
      MIDI.sendNoteOff(61,60,1);
      finger2phOn = !finger2phOn;}
     
    int finger3phState = digitalRead(finger3ph);
    if (finger3phState == 0 & finger3phOn == false) {
      MIDI.sendNoteOn(63,60,1);
      finger3phOn = !finger3phOn; }
    if (finger3phState > 0 & finger3phOn == true) {
      MIDI.sendNoteOff(63,60,1);
      finger3phOn = !finger3phOn;}
    
    int finger6phState = digitalRead(finger6ph);
    if (finger6phState == 0 & finger6phOn == false) {
      MIDI.sendNoteOn(68,60,1);
      finger6phOn = !finger6phOn; }
    if (finger6phState > 0 & finger6phOn == true) {
      MIDI.sendNoteOff(68,60,1);
      finger6phOn = !finger6phOn;}
    
    int finger7phState = digitalRead(finger7ph);
    if (finger7phState == 0 & finger7phOn == false) {
      MIDI.sendNoteOn(70,60,1);
      finger7phOn = !finger7phOn; }
    if (finger7phState > 0 & finger7phOn == true) {
      MIDI.sendNoteOff(70,60,1);
      finger7phOn = !finger7phOn;}

}