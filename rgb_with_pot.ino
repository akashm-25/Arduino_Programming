/*PROGRAM FOR POT WITH RGB
 * DEVELOPER : AKASH M
 * DATE : 16/01/2020
 * COMPANY : ENVISION
 * VERSION : 7.0 
 */
 int po=A1;
 void rgb(int,int,int);
void setup() {
  // put your setup code here, to run once:
pinMode(A1,INPUT);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int l=analogRead(A1);
  Serial.println(l);
  delay(100);
  if(l<=100)
  {
    rgb(0,0,0);
  }
  else if((l>100)&&(l<=200))
  {
    rgb(148,0,211);
  }
  else if((l>200)&&(l<=300))
  {
    rgb(75,0,130);
  }
   else if((l>300)&&(l<=400))
  {
    rgb(0,0,225);
  }
   else if((l>400)&&(l<=500))
  {
    rgb(0,255,0);
  }
   else if((l>500)&&(l<=600))
  {
    rgb(220,220,220);
  }
   else if((l>600)&&(l<=700))
  {
    rgb(0,0,0);
  }
   else if((l>700)&&(l<=800))
  {
    rgb(255,0,0);
  }
   else if((l>800)&&(l<=900))
  {
    rgb(255,255,255);
  }
  

}
void rgb(int r,int g,int b)
{
  analogWrite(3,255-r);
  analogWrite(5,255-g);
  analogWrite(6,255-b);
}
  
