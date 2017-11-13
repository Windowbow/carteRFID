// Arduino code for Neopixel LED controller
// using a potentiometer and switch button
// (C) Ismail Uddin, 2015
// www.scienceexposure.com

#include <Adafruit_NeoPixel.h>
#define PIN 3
Adafruit_NeoPixel strip = Adafruit_NeoPixel(12, PIN, NEO_GRB +NEO_KHZ800);

int compteur=1;

  int i=0;

    void setup() {
      Serial.begin(9600);
      strip.begin();
      strip.show(); // Initialize all pixels to 'off'
      int i;
      for (i=0;i<12;i++){
        strip.setPixelColor(i, 0, 0, 255);
        
      }
      
      strip.setBrightness(10);
      strip.show();
    }
    

void loop() {

  if (Serial.available()>0){
    char texte;
    texte=Serial.read();
    if (texte=='0'){
      int k;
      for (k=0;k<100;k++){
        int j;
        for (j=0;j<12;j++){
        strip.setPixelColor(j,255,0,0);

        }
        strip.show();
        delay(150);
        for (j=0;j<12;j++){
        strip.setPixelColor(j,0,0,0);

        }
        strip.show();
        delay(150);
      }
    }

    
    if (texte=='1'){
      int j;
      for (j=0;j<12;j++){
        strip.setPixelColor(j,255,255,255);

        }
      strip.show();
      delay(3000);
      for (j=0;j<12;j++){
        strip.setPixelColor(j,0,0,0);

        }
      strip.show();
      delay(50);
        
    }


    if (texte=='2'){
      if (compteur==1){
      compteur=2;
      int j;
      for (j=0;j<4;j++){
        strip.setPixelColor(j,0,255,0);

        }
        for (j=4;j<12;j++){
        strip.setPixelColor(j,255,0,0);

        }
      strip.show();
      delay(50);
      }
      else{
        Serial.write("fuck you");
        compteur=1;
        int j;
        for (j=0;j<12;j++){
        strip.setPixelColor(j,0,0,0);

        }
      strip.show();
      delay(50);
        
      }
    }
    if (texte=='3'){
      if (compteur==2){
      compteur=3;
      int j;
      for (j=4;j<8;j++){
        strip.setPixelColor(j,0,255,0);

        }

      strip.show();
      delay(50);
      }
      else{
        Serial.write("fuck you 2");
        compteur=1;
        int j;
        for (j=0;j<12;j++){
        strip.setPixelColor(j,0,0,0);

        }
      strip.show();
      delay(50);
        
      }
    }
    if (texte=='4'){
      if (compteur==3){
      compteur=1;
      int j;
      for (j=8;j<12;j++){
        strip.setPixelColor(j,0,255,0);

        }

      strip.show();
      delay(150);
      int k;
      for (k=0;k<50;k++){
      strip.setPixelColor(k%12,255,0,0);
      strip.setPixelColor((k+1)%12,255,122,0);
      strip.setPixelColor((k+2)%12,255,255,0);
      strip.setPixelColor((k+3)%12,122,255,0);
      strip.setPixelColor((k+4)%12,0,255,0);
      strip.setPixelColor((k+5)%12,0,255,122);
      strip.setPixelColor((k+6)%12,0,255,255);
      strip.setPixelColor((k+7)%12,0,122,255);
      strip.setPixelColor((k+8)%12,0,0,255);
      strip.setPixelColor((k+9)%12,122,0,255);
      strip.setPixelColor((k+10)%12,255,0,255);
      strip.setPixelColor((k+11)%12,255,0,122);
      strip.show();
      delay(50);
      }
      
      }
      else{
        Serial.write("fuck you 3");
        compteur=1;
        int j;
        for (j=0;j<12;j++){
        strip.setPixelColor(j,0,0,0);

        }
      strip.show();
      delay(50);
        
      }
    }
  }
  
}
