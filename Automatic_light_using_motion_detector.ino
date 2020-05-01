/*
 * PROGRAM FOR AUTOMATATED LIGHT SYSTEM.
 * DEVELOPER- AKASH.M
 * DATE -23/01/2020
 * COMPANY -ENVISION LAB
 * VERSION - 1.0
 */
int pir = 5; 
int a = 0; 
int led = 6;
void setup() {
pinMode(led, OUTPUT); 
pinMode(pir,INPUT); 
Serial.begin(9600);
}
void loop(){
a = digitalRead(pir); 
if(a==1)
{
  Serial.println("Motion detected");
  digitalWrite(led,LOW);
  
}
else if(a==0)
{
  
  Serial.println(" No Motion detected");
  digitalWrite(led,HIGH);
  
}
}
