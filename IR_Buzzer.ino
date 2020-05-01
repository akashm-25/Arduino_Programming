 
/*PROGRAM FOR IR AND BUZZER
 * DEVELOPER : AKASH M
 * DATE : 15/01/2020
 * COMPANY : ENVISION
 * VERSION : 5.0
 */
 int sen = 2;
 int led=3;
 int buz=0;
 int ir=4;
void setup() {
  // put your setup code here, to run once:
 
  pinMode(ir,INPUT);
  pinMode(sen,INPUT);
  pinMode(led,OUTPUT);
  pinMode(buz,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int l=digitalRead(sen);
  int r=digitalRead(ir);
  if(l==0)
  {
 digitalWrite(led,!l);
 digitalWrite(buz,!l);
 delay(100);
  digitalWrite(led,l);
 digitalWrite(buz,l);
 delay(100);
  }
  else if(r==0)
  {
 digitalWrite(led,!l);
 digitalWrite(buz,! l);
 delay(100);
  digitalWrite(led,l);
 digitalWrite(buz,l);
 delay(100);
   
  }
 
 
}
  
