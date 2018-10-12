/*  This code was written for the M.A.D.E. e-textiles
     curriculum by the Penn e-textiles team. M.A.D.E. 2018
     GPL V3 for non commercial use. M.A.D.E. 2018 CC- BY NC SA.

  ◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
  This program is an EXAMPLE used to phyically test with
  an LED and alligator clips which pins can be analogWrite 
  programmed and should be used for fading LEDs. Literally
  just routes power to all the General Purpose Input Output
  pins (GPIO). Digital pins will be off under 127 and 
  on over 128. This example is written using an Array and For loop.
  This code will compile as is.
  ◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇

  ADD STUDENT META HERE
  STUDENT NAME(S):
  Date Written:
  Description: Add a brief description of what program does
*/


int pinsArray[] = {0, 1, 2, 3, 6, 9, 10, 12};
int counterVariable;


void setup() {

}

void loop() {
  /* Use the countingVariable to count each repetition in the FOR loop.
     Start at 0, and as long as the counterVariable is less than 8, add 1.
     Each time through, repeat the same actions to the place in the pinArray
     that the counterVariable matches.
     Meaning turn on pin 0 to 150 out of 255. Repeat until all pins are on(1,2,3,6,9,10,12).
  */
  for (counterVariable = 0; counterVariable < 8; counterVariable++) {
    analogWrite(pinsArray[counterVariable], 50);
  }

}
