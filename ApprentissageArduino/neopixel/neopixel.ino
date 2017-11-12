// Arduino code for Neopixel LED controller
// using a potentiometer and switch button
// (C) Ismail Uddin, 2015
// www.scienceexposure.com

#include <Adafruit_NeoPixel.h>
#define PIN 3
Adafruit_NeoPixel strip = Adafruit_NeoPixel(12, PIN, NEO_GRB +NEO_KHZ800);


  int i=0;

    void setup() {
      strip.begin();
      strip.show(); // Initialize all pixels to 'off'
      //int i;
      //for (i=0;i<12;i++){
//        strip.setPixelColor(i, 0, 0, 0);
//        
//      }
//      
//      strip.setBrightness(10);
//      strip.show();
    }
    

void loop() {

  strip.setPixelColor(i%12,0,0,0);
  strip.setPixelColor((i+1)%12,255,0,0);
  i=i+1;
  delay(50);
  strip.show();
  
}
