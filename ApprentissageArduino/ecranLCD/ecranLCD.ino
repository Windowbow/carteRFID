//DFRobot.com
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20,16,2);  // set the LCD address to 0x20 for a 16 chars and 2 line display

void setup()
{
  Serial.begin(9600);
  lcd.init();                      // initialize the lcd 
 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.print("FUCK YOU!");
  lcd.home();
}

void loop()
{
lcd.print("FUCK YOU!");
delay(500);
lcd.home();
lcd.print(" FUCK YOU!");
delay(500);
lcd.home();
lcd.print("  FUCK YOU!");
delay(500);
lcd.home();
lcd.print("   FUCK YOU!");
delay(500);
lcd.home();
lcd.print("    FUCK YOU!");
delay(500);
lcd.home();
lcd.print("     FUCK YOU!");
delay(500);
lcd.home();
lcd.print("      FUCK YOU!");
delay(500);
lcd.home();
lcd.print("       FUCK YOU!");
delay(500);
lcd.home();
lcd.print("!       FUCK YOU");
delay(500);
lcd.home();
lcd.print("U!       FUCK YO");
delay(500);
lcd.home();
lcd.print("OU!       FUCK Y");
delay(500);
lcd.home();
lcd.print("YOU!       FUCK ");
delay(500);
lcd.home();
lcd.print(" YOU!       FUCK");
delay(500);
lcd.home();
lcd.print("K YOU!       FUC");
delay(500);
lcd.home();
lcd.print("CK YOU!       FU");
delay(500);
lcd.home();
lcd.print("UCK YOU!       F");
delay(500);
lcd.home();
  if (Serial.available() > 0) {
                // read the incoming byte:
                //incomingByte = Serial.read();
                char texte;
                texte=Serial.read();
                if (texte=='0'){
                  lcd.print("Bienvenue");
                }
                if (texte=='1'){
                  lcd.print("Ok");
                }
                if (texte=='2'){
                  lcd.print("Recommencer");
                }
                if (texte=='3'){
                  lcd.print("Recommencer");
                }
  }
  }
