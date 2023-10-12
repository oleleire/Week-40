#include <Arduino.h>
#line 1 "/Users/oleleire/Documents/ESI/Prosjektfag/Øvingsprosjekter /Week-40/Oppgave1/Oppgave1.ino"
const int redLed = 8;
const int sensor = A0;




#line 7 "/Users/oleleire/Documents/ESI/Prosjektfag/Øvingsprosjekter /Week-40/Oppgave1/Oppgave1.ino"
void setup();
#line 14 "/Users/oleleire/Documents/ESI/Prosjektfag/Øvingsprosjekter /Week-40/Oppgave1/Oppgave1.ino"
void loop();
#line 7 "/Users/oleleire/Documents/ESI/Prosjektfag/Øvingsprosjekter /Week-40/Oppgave1/Oppgave1.ino"
void setup(){
Serial.begin(9600);
pinMode(redLed,OUTPUT);
pinMode(sensor,INPUT);

}

void loop(){

}



