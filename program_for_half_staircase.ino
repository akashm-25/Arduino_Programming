/*
 * PROGRAM  WITH HALF STAIRCASE.
 * DEVELOPER- AKASH
 * DATE -11/01/2020
 * COMPANY -ENVISION LAB
 * VERSION - 1.3
 */
 int i1=13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(i1, OUTPUT);
}
void loop(){
  for(int i=1000;i>=0;i=i-100)

  {
   myblink(1,i);
}
}


// the loop function runs over and over again forever
void myblink(int n , int a)
{
  for(int i=0;i<=n;i++){
  digitalWrite(i1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(a);                       // wait for a second
  digitalWrite(i1, LOW);    // turn the LED off by making the voltage LOW
  delay(a);                       // wait for a second
}
}
