/*  This code was written for the M.A.D.E. e-textiles 
 *   curriculum by the Penn e-textiles team. M.A.D.E. 2018 
 *   GPL V3 for non commercial use. M.A.D.E. 2018 CC- BY NC SA.

◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
This program is an EXAMPLE of how to map a range of numbers.
This code will compile as is.
◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇

ADD STUDENT META HERE
STUDENT NAME(S):
 Date Written:
 Description: Add a brief description of what program does
*/

int sensorPinToRead = A5; //sensors: A5 light, A4 sound, A0 temperature 
int mappedOutputLED = 13; //try connecting a different LED with alligator clips: D0, D1, D2, D3, D6, D9, D10, D12. Digital pins should be programmed without the "D". 

int sensorReadValue = 0;
int mappedSensorValue = 0;

int shortPause = 2;       //delay variable, change to increase the delay and slow down the output numbers


void setup() {
  Serial.begin(9600);     // initialize serial communications at 9600 bps
}

void loop() {
  /*We want to read the sensor pin and then take that reading and 
   * map it to a smaller or larger range of numbers. If we are 
   * mapping a large set to a smaller range of numbers, we need 
   * to squoosh it down. To map a small set to a larger range of
   * numbers, we need to stretch it out. To use the "map" function
   * fill in your numbers in this order: 
   * map(value, fromLow, fromHigh, toLow, toHigh);
   * Example: variableToHoldMappedNumbers = map(variableYouJustRequestedWithAnalogRead, #lowestItIs,#highestItIs, #lowestYouWantItToBe, #highestYouWantItToBe);
   * For further mapping knowledge: https://www.arduino.cc/reference/en/language/functions/math/map/ 
   */
  
  sensorReadValue = analogRead(sensorPinToRead);
  mappedSensorValue = map(sensorReadValue, 0, 1023, 0, 255);  //can also have your desired numbers reversed
  
  analogWrite(mappedOutputLED, mappedSensorValue);

  // write out the results to the Serial Monitor:
  Serial.print("sensor reading = ");
  Serial.print(sensorReadValue);
  Serial.print("\t mapped output = ");
  Serial.println(mappedSensorValue);

  // wait a bit (in milliseconds)before repeating everything in the void loop section
  delay(shortPause);
}
