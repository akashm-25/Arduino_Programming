#include <EEPROM.h>

#include <Adafruit_GFX.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>

#include <Adafruit_SSD1306.h>
#include <splash.h>

#include <Wire.h>

#define DISP_D1 11      //MOSI is D1  (Master OUT Slave IN)
#define DISP_D0 12      //MISO is D0  (Master IN Slave OUT)
#define DISP_DC 9
#define DISP_RST 10
#define DISP_CS 8

#define DISP_CLM 128
#define DISP_RW 64

#define sw 4
#define sw2 5

#define trigPin 2
#define echoPin 3

int duration , distance;
int ultraDist();
void Odisplay();

int swCount=0;
int swCB=0;
int eepaddr = 0;



Adafruit_SSD1306 display(DISP_CLM, DISP_RW, DISP_D1, DISP_D0, DISP_DC, DISP_RST, DISP_CS);
                          



void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(sw, INPUT_PULLUP);
    pinMode(sw2, INPUT_PULLUP);
    
    Serial.begin(9600);
    
    
    if(!display.begin(SSD1306_SWITCHCAPVCC,0x3C))
    {
      for(;;);  
    }
  
    
}

void loop() {
    
  swCB = EEPROM.read(eepaddr);
  swCount=swCB;
  int swBuff = digitalRead(sw);
  int swBuff2= digitalRead(sw2);
  delay(150);
  if((swBuff==0)&& (swCount<10)&& (swBuff2==1))
  {
    Odisplay();
    swCount++;
    EEPROM.write(eepaddr,swCount);
  }
  else
  {
    display.clearDisplay();
    display.display();
  }
  swBuff2= digitalRead(sw2);
     if ( swBuff2==0 )
  {
    delay(500);
    swBuff = digitalRead(sw);
    if(swBuff==0)
    {
      delay(2000);
      EEPROM.write(eepaddr,0);
      //delay(500);
       display.clearDisplay();
      display.setCursor(25,0);
      display.setTextSize(2);
      display.println("YAAY!");

      display.setTextSize(1);
      display.println("RESET Aithu Macha");
      display.display();
      delay(2000);

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

void Odisplay()
{
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(15,0);
  display.println("Distance    in cm");
  display.setTextSize(3);
  display.setCursor(40,40);
  distance = ultraDist();
  display.println(distance);
  display.display();
}
