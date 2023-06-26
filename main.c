#include <LiquidCrystal.h> 



LiquidCrystal lcd(0, 1, 8, 9, 10, 11); 

void setup()

{

 

lcd.begin(16, 2);

}

 

void loop()

{



lcd.print("   ROBOCOMCO");

lcd.setCursor(0, 1);

lcd.print("https://www.robocombo.com");

delay(750);

lcd.scrollDisplayLeft();

lcd.setCursor(0, 0);

}