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

int finger1ph = 10; 



boolean finger1on = false;
boolean finger2on = false;
boolean finger3on = false;
boolean finger4on = false;
boolean finger5on = false;
boolean finger6on = false;
boolean finger7on = false;
boolean finger8on = false;

void setup() {

MIDI.begin();;  
  
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
if (finger1State == 0 & finger1on == false) {
  MIDI.sendNoteOn(60,60,1);
  finger1on = !finger1on; }
if (finger1State > 0 & finger1on == true) {
  MIDI.sendNoteOff(60,60,1);
  finger1on = !finger1on;}

int finger2State = digitalRead(finger2);
if (finger2State == 0 & finger2on == false) {
  MIDI.sendNoteOn(62,60,1);
  finger2on = !finger2on; }
if (finger2State > 0 & finger2on == true) {
  MIDI.sendNoteOff(62,60,1);
  finger2on = !finger2on;}

int finger3State = digitalRead(finger3);
if (finger3State == 0 & finger3on == false) {
  MIDI.sendNoteOn(64,60,1);
  finger3on = !finger3on; }
if (finger3State > 0 & finger3on == true) {
  MIDI.sendNoteOff(64,60,1);
  finger3on = !finger3on;}

int finger4State = digitalRead(finger4);
if (finger4State == 0 & finger4on == false) {
  MIDI.sendNoteOn(65,60,1);
  finger4on = !finger4on; }
if (finger4State > 0 & finger4on == true) {
  MIDI.sendNoteOff(65,60,1);
  finger4on = !finger4on;}

int finger5State = digitalRead(finger5);
if (finger5State == 0 & finger5on == false) {
  MIDI.sendNoteOn(67,60,1);
  finger5on = !finger5on; }
if (finger5State > 0 & finger5on == true) {
  MIDI.sendNoteOff(67,60,1);
  finger5on = !finger5on;}
 
int finger6State = digitalRead(finger6);
if (finger6State == 0 & finger6on == false) {
  MIDI.sendNoteOn(69,60,1);
  finger6on = !finger6on; }
if (finger6State > 0 & finger6on == true) {
  MIDI.sendNoteOff(69,60,1);
  finger6on = !finger6on;}

int finger7State = digitalRead(finger7);
if (finger7State == 0 & finger7on == false) {
  MIDI.sendNoteOn(71,60,1);
  finger7on = !finger7on; }
if (finger7State > 0 & finger7on == true) {
  MIDI.sendNoteOff(71,60,1);
  finger7on = !finger7on;}

int finger8State = digitalRead(finger8);
if (finger8State == 0 & finger8on == false) {
  MIDI.sendNoteOn(72,60,1);
  finger8on = !finger8on; }
if (finger8State > 0 & finger8on == true) {
  MIDI.sendNoteOff(72,60,1);
  finger8on = !finger8on;}  
}
