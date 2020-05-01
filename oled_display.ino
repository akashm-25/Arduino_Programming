
#define DISP_D1 11
#define DISP_D0 12
#define DISP_DC 9          // DATA/COMMAND     
#define DISP_RST 10
#define DISP_CS 8

#define DISP_CLM 128
#define DISP_RW 64

#define trigPin  2;
#define echoPin  3;

int duration, distance;

#define souravSwitch 4

Adafruit_SSD1306 display(DISP_CLM,DISP_RW,DISP_D1,DISP_D0,DISP_DC,DISP_RST,DISP_CS);

int ultraDist();
void ODisplay();

void setup()
{
  pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT); 
pinMode(souravSwitch,INPUT_PULLUP);

  if(!display.begin(SSD1306_SWITCHCAPVCC,0x3C))   // 64rows-3C  128-COL
  {
    for(;;);
  }
}
 void loop().
{
int swBuff = digitalRead(souravSwitch); 
  if(swBuff == 0)
  {
   ODisplay(); 
  }
  else
  { 
    display.clearDisplay();
  }
}
int ultraDist ()z
{
digitalWrite(trigPin, LOW);
  delay(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  int UDuration = pulseIn(echoPin, HIGH);
  int UDistance= duration*0.034/2;
  return UDistance;
}
void ODisplay()
{
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(25,0);
  display.println("Distance in cm");
  display.setTextSize(3);
  display.setCursor(50,30);
  distance = ultraDist();
  display.println(distance);
  display.display();
}
