#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

byte colorato[9] = {
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  };
void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.createChar(1,colorato);

 }

void loop() {
  lcd.setCursor(14, 0);
  lcd.print(10);
  for(int colorato=0 ; colorato <=9 ; colorato++){
    lcd.setCursor(colorato,1);
    lcd.write(byte(1));
  }
  for(int colorato=9; colorato >=0; colorato--){
    delay(1000);
    lcd.setCursor(colorato, 1);
    lcd.print(" ");
    lcd.setCursor(15,0);
    lcd.print(colorato);
    lcd.setCursor(14,0);
    lcd.print(" ");
   }
  delay(1000);

  lcd.clear();
  lcd.setCursor(5, 0);
  lcd.print("BOOM!!");

  delay(5000);

  lcd.setCursor(5, 1);
  lcd.print("BOOM!!");
  lcd.setCursor(15, 0);
  lcd.print(" ");
  delay(5000);
   
  lcd.clear();
}