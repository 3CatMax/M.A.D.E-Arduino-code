/*  This code was written for the M.A.D.E. e-textiles 
 *   curriculum by the Penn e-textiles team. M.A.D.E. 2018 
 *   GPL V3 for non commercial use. M.A.D.E. 2018 CC- BY NC SA.

◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
This program is an EXAMPLE of using a for() loop to fade an LED on pin 10. This is the complete version
of the debugFadingLED.ino that can be found here: 
https://github.com/3CatMax/M.A.D.E-Arduino-code/blob/master/debugFadingLED.ino
This code will compile as is. 
◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇

ADD STUDENT META HERE
STUDENT NAME(S):
 Date Written:
 Description: Add a brief description of what program does
*/

int analogLED = 10;    // LED connected to pin 10

void setup() {
  pinMode(analogLED, OUTPUT);
}

void loop() {
  /*This for()loop SHOULD be fading in and out like breathing, 
  NOT hyperventilating. */
 
  for (int getBrighter = 0 ; getBrighter <= 255; getBrighter = getBrighter+1){
    analogWrite(analogLED, getBrighter);
    delay(20);
  }

  for (int getDarkness = 255 ; getDarkness >= 0; getDarkness--){   //this is shorthand for getDarkness = getDarkness-1
    analogWrite(analogLED, getDarkness);
    delay(20);
  }

  delay(1000);

//once you have the inhale at slower pace, write me a steady 
//   exhale for() loop with a creative and descriptive variable 
//   name for fading the light out. Use copy and paste to get
//   the format and then change it from there. Comment out the
//   inhale code to concentrate on the exhale code.  
//   Remember to check the sign direction!




}
