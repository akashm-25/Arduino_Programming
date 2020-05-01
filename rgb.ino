int led1=3;
int led2=5;
int led3=6;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 
  {
    digitalWrite(led1,255);
    delay(100);
    digitalWrite(led1,0);
    digitalWrite(led2,117);
    digitalWrite(led2,0);
    digitalWrite(led3,26);
    digitalWrite(led3,0);
    delay(100);
  

}

}
