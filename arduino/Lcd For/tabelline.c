// programma tabelline da 1 a 10
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  for (int x = 1; x <= 10; x++) {
    lcd.setCursor(0, 0);
    lcd.print("Tabellina del");
    lcd.setCursor(14,0);
    lcd.print(x);
    lcd.setCursor(0,1);
    lcd.print(x);
    lcd.setCursor(2,1);
    lcd.print("x");
    lcd.setCursor(6,1);
    lcd.print("=");
   
    for (int i = 0; i <= 10; i++) {
      lcd.setCursor(4, 1);
      lcd.print(i);
      lcd.setCursor(8, 1);
      lcd.print(i * x);
      delay(1000);

    }
    lcd.clear(); 
  }
}