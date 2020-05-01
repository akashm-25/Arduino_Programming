#include<Servo.h>
Servo myservo;
int val=0;
int en1=4;
int en2=3;
int en3=6;
int count=0;
int cn=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(en1,INPUT);
  pinMode(en2,INPUT);
  pinMode(en3,INPUT_PULLUP);
  myservo.attach(9);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int m=digitalRead(en1);
  int n=digitalRead(en2);
  int o=digitalRead(en3);
  /*Serial.print("Clk is = ");
  Serial.println(m)*/;
  Serial.print("Data is = ");
  Serial.println(n);
  /*Serial.print("Switch is = ");
  Serial.println(o);*/
  delay(500);
  if((n==0)||(n==1))
  {
    count++;
  }
  cn=analogRead(count);
  val = analogRead(cn);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
  delay(15); 
  

}
