#include <Adafruit_GFX.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>

#include <Adafruit_SSD1306.h>
#include <splash.h>

        


#define DISP_D1 11
#define DISP_D0 12
#define DISP_DC 9          
#define DISP_RST 10
#define DISP_CS 8

#define DISP_CLM 128
#define DISP_RW 64



Adafruit_SSD1306 display(DISP_CLM, DISP_RW, DISP_D1, DISP_D0, DISP_DC, DISP_RST, DISP_CS);
// 'download', 128x64px
// 'pp-1_compress53', 128x64px
// 'sv-pic-5-763714', 128x60px
// 'maxresdefault', 128x64px
const unsigned char myBitmap [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x80, 
  0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0xc0, 0x20, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x20, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x43, 0x33, 0xf7, 0x73, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x43, 0x33, 0x33, 0x76, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x43, 0xf6, 0x1b, 0x76, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x43, 0xf6, 0x1b, 0xfe, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x00, 0x00, 0x00, 0x1c, 0x30, 0x00, 0x00, 0x43, 0x37, 0x39, 0xdc, 0x3f, 0xcd, 0x7e, 0x91, 0x80, 
  0x00, 0x00, 0x00, 0x0f, 0xb0, 0x00, 0x00, 0x43, 0x33, 0xf1, 0xdc, 0x17, 0xcf, 0x5f, 0xf1, 0x80, 
  0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x42, 0x31, 0xe1, 0x8c, 0x00, 0xcd, 0xa4, 0x11, 0x80, 
  0x00, 0x00, 0x02, 0x03, 0xc8, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x00, 0x00, 0x01, 0x03, 0xc0, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x42, 0xbf, 0x2c, 0x76, 0xbe, 0x9b, 0xd7, 0x51, 0x80, 
  0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x47, 0xb6, 0xec, 0x76, 0x6b, 0x9a, 0x9d, 0xf1, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x46, 0xf7, 0xfe, 0x76, 0x6b, 0xde, 0x95, 0x71, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x40, 0xbb, 0x12, 0x56, 0x06, 0x6c, 0x92, 0x41, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x00, 0x00, 0x00, 0x40, 0x10, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x41, 0xf6, 0x30, 0xc3, 0x98, 0xf9, 0xf9, 0xf1, 0x80, 
  0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x43, 0xf6, 0x31, 0xe3, 0x99, 0xf9, 0xdb, 0xb1, 0x80, 
  0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x47, 0x07, 0x31, 0xe3, 0xd9, 0x81, 0x83, 0x81, 0x80, 
  0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x46, 0x07, 0xf1, 0xb3, 0xf9, 0xbd, 0xf9, 0xf1, 0x80, 
  0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x47, 0x07, 0x73, 0xf3, 0x79, 0x9d, 0x80, 0x31, 0x80, 
  0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x43, 0xf6, 0x33, 0xfb, 0x39, 0xdd, 0x83, 0x31, 0x80, 
  0x00, 0x00, 0x00, 0x06, 0x78, 0x00, 0x00, 0x43, 0xf6, 0x37, 0x1b, 0x18, 0xf9, 0xfb, 0xf1, 0x80, 
  0x40, 0x00, 0x00, 0x03, 0x9c, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x40, 0x00, 0x00, 0x02, 0x1e, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x40, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0c, 0x03, 0xd0, 0x73, 0x91, 0x7a, 0x29, 0x23, 0x11, 0x80, 
  0x40, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0e, 0x07, 0xd3, 0x7b, 0xdb, 0x7b, 0x6d, 0xb7, 0x91, 0x80, 
  0x40, 0x00, 0x00, 0x00, 0x15, 0x00, 0x1f, 0x07, 0x9a, 0x72, 0x6e, 0x33, 0xed, 0xf4, 0x11, 0x80, 
  0x40, 0x00, 0x00, 0x00, 0x60, 0x00, 0x1f, 0x07, 0x9e, 0x73, 0xce, 0x33, 0xef, 0xfd, 0xd1, 0x80, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x07, 0x8c, 0x73, 0xc4, 0x33, 0x6f, 0x76, 0xd1, 0x80, 
  0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x0f, 0x03, 0xcc, 0x7a, 0x44, 0x33, 0x69, 0x33, 0x91, 0x80, 
  0x40, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x40, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x40, 0x07, 0xc0, 0x80, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x40, 0x06, 0x07, 0xe0, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x40, 0x04, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 
  0x40, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x80, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xe0, 0x00, 0x71, 0xcd, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};



void setup()
{

  if(!display.begin(SSD1306_SWITCHCAPVCC,0x3C))   // 64rows-3C  128-COL
  {
    for(;;);
  }
}
 void loop()
 { 
  display.clearDisplay();
   display.drawBitmap ( 0,0,myBitmap,128,64,1);
   display.display();
  }  
 
