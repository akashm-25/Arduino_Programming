

#include <EEPROM.h>

#include <Adafruit_GFX.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>

#include <Adafruit_SSD1306.h>
#include <splash.h>

#include <Wire.h>
#define DISP_D1 11
#define DISP_D0 12
#define DISP_DC 9
#define DISP_RST 10
#define DISP_CS 8
#define DISP_CLM 128
#define DISP_RW 64
#define swin 4
#define trigPin 2
#define echoPin 3
#define resetsw 5
int duration, distance;
int swCount=0;
int swCB=0;
Adafruit_SSD1306 display(DISP_CLM,DISP_RW,DISP_D1,DISP_D0,DISP_DC,DISP_RST,DISP_CS);
int ultraDist();
void ODisplay();
int eepAddr=0;

void setup() {
  // put your setup code here, to run once:
   pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT); 
  pinMode(swin,INPUT_PULLUP);
  pinMode(resetsw,INPUT_PULLUP);
  if(!display.begin(SSD1306_SWITCHCAPVCC,0x3C))
  {
   for(;;); 
  }

}


 void loop()
{
 // EEPROM.write(eepAddr,0);  
  swCB = EEPROM.read(eepAddr);
  swCount = swCB;
int swBuff = digitalRead(swin); 
int rstBuff =digitalRead(resetsw);
delay(150);
  if((swBuff == 0)&&(swCount<11)&&(rstBuff==1))
  {
    ODisplay(); 
    swCount++;
    EEPROM.write(eepAddr,swCount);
  }
  else if(rstBuff==0)
  {
    delay(500);
  
    if(swBuff==0)
    {
      delay(2000);
      EEPROM.write(eepAddr,0);
      delay(500);
      display.setCursor(25,0);
      display.setTextSize(2);
      display.println("YAAY!");
      display.setCursor(0,30);
      display.setTextSize(1);
      display.println("RESET");
      display.display();
      delay(2000);

    }
  
  else
  { 
    display.clearDisplay();
    display.display();
  }
}
}

int ultraDist ()
{
digitalWrite(trigPin, LOW);
  delay(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  int UDuration = pulseIn(echoPin, HIGH);
  int UDistance= UDuration*0.034/2;
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
