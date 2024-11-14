#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup()
{
  	lcd.init();
  	lcd.backlight();
}
void loop()
{
  lcd.setCursor(0,0);
  lcd.print("TIMER");
  lcd.setCursor(1,1);
  lcd.print("0m");
  lcd.setCursor(5,1);
  lcd.print("s"); 
  // for per i minuiti
  for(int m=0; m<15 ; m++){
    lcd.setCursor(0,1);
  	lcd.print(m); 
    // for per i secondi 
    for (int x = 0; x<= 59; x++ ){
   	lcd.setCursor(3,1);
  	lcd.print(x); 
    delay(1); 
 	}
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("TIMER");
    lcd.setCursor(2,1);
    lcd.print("m");
    lcd.setCursor(5,1);
    lcd.print("s");
  } 
  lcd.clear(); 
}
