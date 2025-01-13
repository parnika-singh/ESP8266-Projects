#include <LittleFS.h>

/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground through 220 ohm resistor
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
*/

// constants won't change. They're used here to set pin numbers:
  // the number of the pushbutton pin
const int led_r2 = 14;    // the number of the LED pin
const int led_y2 = 12;
const int led_g2 = 13;
const int led_y1 = 5, led_r1=16, led_g1=4 ;

// variables will change:
 // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(led_r1, OUTPUT);
  pinMode(led_y1, OUTPUT);
  pinMode(led_g1, OUTPUT);
  pinMode(led_r2, OUTPUT);
  pinMode(led_y2, OUTPUT);
  pinMode(led_g2, OUTPUT);
  // initialize the pushbutton pin as an input:
}

void loop() {    //LOW == ON     HIGH == OFF
  digitalWrite(led_r1, LOW);
  digitalWrite(led_y1, HIGH);   
  digitalWrite(led_g1, HIGH);

  digitalWrite(led_r2, HIGH);
  digitalWrite(led_y2, HIGH);
  digitalWrite(led_g2, LOW);
  delay(5000);

  //PASS 2
  digitalWrite(led_y2, LOW);
  digitalWrite(led_g2, HIGH);
  delay(2500);

  //PASS 3
  digitalWrite(led_r1, HIGH);
  digitalWrite(led_g1, LOW);

  digitalWrite(led_r2, LOW);
  digitalWrite(led_y2, HIGH);
  delay(5000);

  //PASS 4
  digitalWrite(led_y1, LOW);   
  digitalWrite(led_g1, HIGH);
  delay(2500);
}
