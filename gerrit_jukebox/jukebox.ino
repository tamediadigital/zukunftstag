/* Read Quadrature Encoder
  * Connect Encoder to Pins encoder0PinA, encoder0PinB, and +5V.
  * Sketch by max wolf / www.meso.net
  * v. 0.1 - very basic functions - mw 20061220
  */  

#include "tonleiter.h"
#define melodyPin A5

 int val; 
 int encoder0PinA = 3;
 int encoder0PinB = 4;
 int encoder0Pos = 0;
 int encoder0PinALast = LOW;
 int n = LOW;

 void setup() { 
   pinMode (encoder0PinA,INPUT);
   pinMode (encoder0PinB,INPUT);
   Serial.begin (9600);
 } 

 void loop() { 
   n = digitalRead(encoder0PinA);
   if ((encoder0PinALast == LOW) && (n == HIGH)) {
     if (digitalRead(encoder0PinB) == LOW) {
       encoder0Pos--;
     } else {
       encoder0Pos++;
     }
     int note = (abs(encoder0Pos) + 3) * 10;
     Serial.print (note);
     Serial.print ("/");
     int noteDuration = 100;
     if (note == 100){
      song(0);
     }else if (note==200){
      song(1);
     }else if (note==300){
      song(2);      
     }else{
       buzz(melodyPin, note, noteDuration);
       delay(noteDuration);
       buzz(melodyPin, 0, noteDuration);
     }
   } 
   encoder0PinALast = n;
 } 
 
 void buzz(int targetPin, long frequency, long length) {
  digitalWrite(13, HIGH);
  long delayValue = 1000000 / frequency / 2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  digitalWrite(13, LOW);
}

void song(int s) {
  // iterate over the notes of the melody:
  if (s == 0){
    Serial.println(" 'Oh, James!'");
    int size = sizeof(jamesbond) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote+=2) {
      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1450 / jamesbond[thisNote+1];
      buzz(melodyPin, jamesbond[thisNote], noteDuration);
 
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 0.80;
      delay(pauseBetweenNotes);
 
      // stop the tone playing:
      // buzz(melodyPin, 0, noteDuration);
    }
  }else if (s == 1){
    Serial.println(" 'Klempner!'");
    int size = sizeof(mario) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote+=2) {
      int noteDuration = 1000 / mario[thisNote+1];
      buzz(melodyPin, mario[thisNote], noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      buzz(melodyPin, 0, noteDuration);
    }
  }else{
    Serial.println(" 'DamDamDam Dada Dam Dada Dam'");
    int size = sizeof(march) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote+=2) {
      buzz(melodyPin, march[thisNote], march[thisNote+1]);
      delay(march[thisNote+1] * 0.50);
      buzz(melodyPin, 0, march[thisNote+1]);
    }
  }
}
