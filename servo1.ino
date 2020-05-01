

#include <Servo.h>

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
int sw1=2;
int sw2=4;
  int cnt =0;
Adafruit_SSD1306 display(DISP_CLM,DISP_RW,DISP_D1, DISP_D0, DISP_DC, DISP_RST, DISP_CS);

Servo servotest;
void setup()
{
  servotest.attach(3);

 pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT_PULLUP);
  Serial.begin(9600);
  if(!display.begin(SSD1306_SWITCHCAPVCC,0x3C))  
  {
    for(;;)

  delay(2500);
  }
 
}
void loop()
{
  delay(500);
int a=digitalRead(sw1);
int b=digitalRead(sw2);

if(a==0)
{
 cnt=cnt+15;
 
  servotest.write(cnt);
  Serial.print("increment");
 
}

 if(b==0)
{

    Serial.print("decrement");
    cnt=cnt-15;
    servotest.write(cnt);
  
}


  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(20,0);
  display.println("hurray in turning in degrees");
     
 
    Serial.println(cnt);
      display.setTextSize(3);
    display.setCursor(50,30);
  display.println(cnt);
  display.display();
 
}
