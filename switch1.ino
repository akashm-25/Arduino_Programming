
/*PROGRAM FOR SWITCH OPERATION
 * DEVELOPER : AKASH M
 * DATE : 13/01/2020
 * COMPANY : ENVISION
 * VERSION : 4.0
 */
 int swin =6;
 void setup()
 {
  pinMode(swin,INPUT); 
  Serial.begin(9600);
 }
 void loop()
 {
  Serial.println(digitalRead(swin));
 }
