
/*PROGRAM FOR COUNTER
 * DEVELOPER : AKASH M
 * DATE : 14/01/2020
 * COMPANY : ENVISION
 * VERSION : 5.0
 */
 int swin =2;
 int swCount =0;
 
 void setup()
 {
  pinMode(swin, INPUT_PULLUP); 
  Serial.begin(9600);
 }
 void loop()
 {
  int swinBuff = digitalRead(swin);
  delay(150);
  if(swinBuff==0)
  {
    swCount++;
  }
  Serial.println(swCount);
  }
