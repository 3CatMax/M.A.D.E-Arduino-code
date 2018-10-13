/*  This code was written for the M.A.D.E. e-textiles 
 *   curriculum by the Penn e-textiles team. M.A.D.E. 2018 
 *   GPL V3 for non commercial use. M.A.D.E. 2018 CC- BY NC SA.

◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
This program is an EXAMPLE of using a for() loop to fade an LED on pin 10. This is the debug version.
The completed version can be found at: 
https://github.com/3CatMax/M.A.D.E-Arduino-code/blob/master/debugFadingLEDcomplete.ino
◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇

ADD STUDENT META HERE
STUDENT NAME(S):
 Date Written:
 Description: Add a brief description of what program does
*/

int analogLED = 10;    // LED connected to pin 10

void setup() {
  // nothing happens in setup
}

void loop() {
  /*This for()loop SHOULD be fading in and out like breathing, 
  NOT hyperventilating. */
  
  for (int getBrighter = 0 ; getBrighter <= 255; getBrighter=getBrighter+5){
    analogWrite(analogLED, getBrighter);
    delay(10);
  }
  analogWrite(analogLED, 0);
  delay(2000);


//once you have the inhale at slower pace, write me a steady 
//   exhale for() loop with a creative and descriptive variable 
//   name for fading the light out. Use copy and paste to get
//   the format and then change it from there. Comment out the
//   inhale code to concentrate on the exhale code.  
//   Remember to check the sign direction!

}
