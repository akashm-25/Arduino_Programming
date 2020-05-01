
#define utrig 2
#define uecho 4
int udur=0;
int udis=0;
int buz=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(utrig,OUTPUT);
  pinMode(uecho,INPUT);
  pinMode(buz,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(utrig,LOW);
  delay(10);
  digitalWrite(utrig,HIGH);
  delayMicroseconds(10);
  digitalWrite(utrig,LOW);
  udur=pulseIn(uecho,HIGH);
  udis=(udur*0.034)/2;
  Serial.println("Distance in cm");
  Serial.println(udis);
  if((udis<=100)&&(udis>=75))
  {
    digitalWrite(buz,HIGH);
    delay(500);
    digitalWrite(buz,LOW);
    delay(500);
    
   
  }
   if((udis<=74)&&(udis>=50))
  {
    digitalWrite(buz,HIGH);
    delay(300);
    digitalWrite(buz,LOW);
    delay(300);
    
   
 }
    if((udis<=49)&&(udis>=25))
  {
    digitalWrite(buz,HIGH);
    delay(200);
    digitalWrite(buz,LOW);
    delay(200);
    
   
 }
    if((udis<=24)&&(udis>=2))
  {
    digitalWrite(buz,HIGH);
    delay(100);
    digitalWrite(buz,LOW);
    delay(100);
    
   
 }

}
