
/*PROGRAM FOR LED OPERATION
 * DEVELOPER : AKASH M
 * DATE : 13/01/2020
 * COMPANY : ENVISION
 * VERSION : 3.2
 */
int LEDONE =2;
int LEDTWO =3;
int LEDTHREE =4;
int LEDFOUR =5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDONE,OUTPUT);
  pinMode(LEDTWO,OUTPUT);
  pinMode(LEDTHREE,OUTPUT);
  pinMode(LEDFOUR,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
      digitalWrite(LEDONE,LOW);
      delay(100);
      digitalWrite(LEDONE,HIGH);
      delay(100);
      digitalWrite(LEDTWO,LOW);
      delay(100);
      digitalWrite(LEDTWO,HIGH);
      delay(100);
      digitalWrite(LEDTHREE,LOW);
      delay(100);
      digitalWrite(LEDTHREE,HIGH);
      delay(100);
      digitalWrite(LEDFOUR ,LOW);
      delay(100);
      digitalWrite(LEDFOUR,HIGH);
      delay(100);
        digitalWrite(LEDFOUR,LOW);
      delay(100);
      digitalWrite(LEDFOUR,HIGH);
      delay(100);
      digitalWrite(LEDTHREE,LOW);
      delay(100);
      digitalWrite(LEDTHREE,HIGH);
      delay(100);
      digitalWrite(LEDTWO,LOW);
      delay(100);
      digitalWrite(LEDTWO,HIGH);
      delay(100);
      digitalWrite(LEDONE ,LOW);
      delay(100);
      digitalWrite(LEDONE,HIGH);
      delay(100);
      
}
