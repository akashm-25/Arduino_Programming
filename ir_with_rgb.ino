int redL = 3;
int greenL = 5;
int blueL = 6;

int irIn = 2;

void setup()
{
  pinMode(redL,OUTPUT);
  pinMode(greenL,OUTPUT);
  pinMode(blueL,OUTPUT);

  pinMode(irIn,INPUT);
}

void loop()
{
  int irBuff = digitalRead(irIn);
  delay(100);
  if(irBuff == 0)
  {
    int rVal,gVal,bVal;
    rVal = random(0,255);
    gVal = random(0,255);
    bVal = random(0,255);
    analogWrite(redL,rVal);
    analogWrite(greenL,gVal);
    analogWrite(blueL,bVal);
  }
}
