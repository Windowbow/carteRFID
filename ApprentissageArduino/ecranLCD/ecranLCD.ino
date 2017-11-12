//DFRobot.com
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20,16,2);  // set the LCD address to 0x20 for a 16 chars and 2 line display

void setup()
{
  //begin synchronise ordi et carte à une vitesse de 9600 baud
  Serial.begin(9600);
  
  lcd.init();                      // initialize the lcd 
 
  // Print a message to the LCD.
  //allume l'écran
  lcd.backlight();
  
  //place le curseur au début de l'écran
  lcd.home();
}

void loop()
{
  
  if (Serial.available() > 0) {
      // read the incoming byte:
      //incomingByte = Serial.read();
      char texte;
      texte=Serial.read();
      if (texte=='0'){
        lcd.clear();
        lcd.print("Bienvenue");
      }
      if (texte=='1'){
        lcd.clear();
        lcd.print("Ok");
      }
      if (texte=='2'){
        lcd.clear();
        lcd.print("Recommencer");
      }
  }
  
}
