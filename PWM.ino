int L1=3;
int L2=5;
int L3=6;
int L4=9;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(L2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
for(int i=0;i<256;i+=2)
{
analogWrite(L1,i);
delay(10);
}
for(int i=256;i>=0;i-=2)
{
analogWrite(L1,i);
delay(10);
}
for(int i=0;i<256;i+=2)
{
analogWrite(L2,i);
delay(10);
}
for(int i=256;i>=0;i-=2)
{
analogWrite(L2,i);
delay(10);
}
for(int i=0;i<256;i+=2)
{
analogWrite(L3,i);
delay(10);
}
for(int i=256;i>=0;i-=2)
{
analogWrite(L3,i);
delay(10);
}
for(int i=0;i<256;i+=2)
{
analogWrite(L4,i);
delay(10);
}
for(int i=256;i>=0;i-=2)
{
analogWrite(L4,i);
delay(10);
}

}
