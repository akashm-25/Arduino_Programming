int clk=2;
int data=3;
int prestate;
int state;
int count=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(clk,INPUT);
  pinMode(data,INPUT);
  Serial.begin(9600);
  prestate=digitalRead(data);
}

void loop() {
  // put your main code here, to run repeatedly:
 state=digitalRead(data);
 if(state!=prestate)
 {
  if(digitalRead(clk)!=state)
  {
    count=count-15;
  }
  else
  {
   count=count+15;
  }
  if((count>360)||(count<-360))
  {
    count =0;
  }
  Serial.print("RE count is= degrees");
  Serial.println(count);
 }
 prestate=state;
}
