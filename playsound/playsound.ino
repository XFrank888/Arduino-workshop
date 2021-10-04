#include "basicpitches.h"
#include "pitches.h"
#include "Despacito.h"
//define input pin for potentiometer
#define SPEAKER 3
//define pin for LED
#define Receiver 19


void song1(){
  play(262,3);
  play(277,3);
  play(294,3);
  play(311,3);
  play(330,3);
  play(349,3);
  play(370,3);
  play(392,3);
  play(415,3);
  play(440,3);
  play(466,3);
  play(494,3);
  play(523,3);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(SPEAKER, OUTPUT);
  analogRead(Receiver);
  pinMode(Receiver, INPUT);
  Serial.begin(9600);
}

void loop(){
  if(analogRead(Receiver)>0 && analogRead(Receiver)<=550){
    song1();
  } else{
    Despacito();
  }
}
