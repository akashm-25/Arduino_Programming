int se=2;
void setup() {
  // put your setup code here, to run once:
  pinMode(se,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int c= digitalRead(2);
  Serial.println(c);
  delay(100);

}
