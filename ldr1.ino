int myldr=A0;;
int led=6;
void setup() {
  // put your setup code here, to run once:
  pinMode(myldr,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int a=analogRead(myldr);
  delay(50);
 Serial.println(a);
 if(a>=100)
 {
  digitalWrite(led,LOW);
  delay(10);
 }
 else if(a<100)
 {
  digitalWrite(led,HIGH);
  delay(10);
 }

  
 

}
