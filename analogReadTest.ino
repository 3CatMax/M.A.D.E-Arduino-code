/*  This code was written for the M.A.D.E. e-textiles
     curriculum by the Penn e-textiles team. M.A.D.E. 2018
     GPL V3 for non commercial use. M.A.D.E. 2018 CC- BY NC SA.

  ◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
  This program is an EXAMPLE used to phyically test with
  an LED and alligator clips which pins can be analogWrite 
  programmed and should be used for fading LEDs. Literally
  just routes power to all the General Purpose Input Output
  pins (GPIO). Digital pins will be off under 127 and on over 128.
  This code will compile as is.
  ◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇

  ADD STUDENT META HERE
  STUDENT NAME(S):
  Date Written:
  Description: Add a brief description of what program does
*/



int pin0 = 0;
int pin1 = 1;
int pin2 = 2;
int pin3 = 3;

//write variables for the remaining pins, 6, 9, 10, 12



void setup() {
pinMode(pin0, OUTPUT);
pinMode(pin1, OUTPUT);
pinMode(pin2, OUTPUT);

//use copy(CMD+C) and paste(CMD+V) to write the pinMode 
//   code lines for the remaining variables. There should
//   be 8 pinMode lines.

}

void loop() {
  analogWrite(pin0,50);
  analogWrite(pin1,50);
  analogWrite(pin2,50);
  analogWrite(pin3,50);
  
 //use copy(CMD+C) and paste(CMD+V) to analogWrite the
 //   remaining pin variables at 50. 

}
