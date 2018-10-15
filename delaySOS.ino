/*  This code was written for the M.A.D.E. e-textiles
     curriculum by the Penn e-textiles team. M.A.D.E. 2018
     GPL V3 for non commercial use. M.A.D.E. 2018 CC- BY NC SA.

  ◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
  This program is an EXAMPLE used to teach using the delay
  function. The LED should be attached to Ground and pin #0(RX #0)
  on the Circuit Playground. Obviously the pattern is wrong, so 
  fix it so that it flashes SOS as described below. This code will
  compile as is, although it doesn't flash the LED correctly.
  ◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇

  ADD STUDENT META HERE
  STUDENT NAME(S):
  Date Written:
  Description: With alligator clips attaching an LED to pin #0, 
  flash the LED for the International Morse code distress signal, 
  SOS =  . . .  __  __  __  . . .
*/



int greenLED = 0; //digital
int shortDelay = 100;
int longDelay = 1000;
void setup() {
pinMode(0, OUTPUT);
}

void loop() {

//short blinks . . .
 digitalWrite(greenLED, HIGH);
 delay(shortDelay);
 digitalWrite(greenLED, LOW);
 delay(shortDelay);
 digitalWrite(greenLED, HIGH);
 delay(shortDelay);
 digitalWrite(greenLED, LOW);
 delay(shortDelay);
 digitalWrite(greenLED, HIGH);
 delay(shortDelay);
 digitalWrite(greenLED, LOW);
 delay(shortDelay);

//long blinks  __  __  __
 digitalWrite(greenLED, HIGH);
 delay(longDelay);
 digitalWrite(greenLED, LOW);
 delay(longDelay);
 digitalWrite(greenLED, HIGH);
 delay(longDelay);
 digitalWrite(greenLED, LOW);
 delay(longDelay);
 digitalWrite(greenLED, HIGH);
 delay(longDelay);
 digitalWrite(greenLED, LOW);
 delay(longDelay);

//short blinks . . .
 digitalWrite(greenLED, HIGH);
 delay(shortDelay);
 digitalWrite(greenLED, LOW);
 delay(shortDelay);
 digitalWrite(greenLED, HIGH);
 delay(shortDelay);
 digitalWrite(greenLED, LOW);
 delay(shortDelay);
 digitalWrite(greenLED, HIGH);
 delay(shortDelay);
 digitalWrite(greenLED, LOW);
 delay(shortDelay);



 



 
}
