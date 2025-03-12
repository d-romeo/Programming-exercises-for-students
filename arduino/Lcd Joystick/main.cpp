#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int x;
int y;
int lcdy = 0;
int lcdx = 7;
int stato = 0;
int stato1 = 1;
void setup()
{
  lcd.init();
  lcd.backlight();
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);

}





void loop() {
  x = analogRead(A1);
  y = analogRead(A2);
  lcd.clear();

  if (x > 600 && lcdx<15) {
    lcdx++;
  }
  if (x < 350 && lcdx>0) {
    lcdx--;
  }
  if (y > 600) {
    lcdy=1;

  }
  if (y < 350) {
    lcdy = 0;
  }

  lcd.setCursor(lcdx, lcdy);
  lcd.print("*");
  delay(200);
}