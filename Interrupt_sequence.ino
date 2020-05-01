int clk=4;
int data=3;
#define interruptpin 2
int prestate;
int state ;
int count=0;


void setup() {
  //put your setup code here, to run once:
  pinMode(interruptpin,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptpin),l1blink,CHANGE);
  pinMode(clk,INPUT);
  pinMode(data,INPUT);
  Serial.begin(9600);
  
 
  prestate=digitalRead(data);
}

void loop() {
 
 state=digitalRead(data);
 if(state!=prestate)
 {
  if(digitalRead(clk)!=state)
  {
    count=count-5;
  }
  else
  {
   count=count+5;
  }
  
 }
  Serial.print("RE count is= degrees");
  Serial.println(count);
 }
 prestate=state;
}
