#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#include <DHT.h>
#include <DHT_U.h>
DHT dht(8, DHT11);
int T;
int Trimmer;
int precedente = 0;
void setup() {
  dht.begin();
  lcd.backlight();
  lcd.init();
  pinMode(2, OUTPUT); //led rosso
  pinMode(3, OUTPUT); //led verde
  pinMode(7, INPUT); //switch
  lcd.setCursor(0, 0);
  lcd.print("Controllo");
  lcd.setCursor(0, 1);
  lcd.print("riscaldamento");
  delay(3000);
  lcd.setCursor(0, 1);
  lcd.print("raffrescatore");
  delay(3000);
  lcd.clear();

}

void loop() {
  precedente = digitalRead(7);
  Trimmer = analogRead(A2);
  Trimmer = map(Trimmer, 0, 1023, 4, 25);
  T = dht.readTemperature();
  lcd.setCursor(0, 0);
  lcd.print("Temp.attuale:");
  lcd.setCursor(14, 0);
  lcd.print(T);
  lcd.setCursor(0, 1);
  lcd.print("Desiderata:");
  
  if (Trimmer < 10)
  {
    lcd.setCursor(14, 1);
    lcd.print(" ");
    lcd.print(Trimmer); 
  }
  else
  {
    lcd.setCursor(14, 1);
    lcd.print(Trimmer);
  }

  if (digitalRead(7) != precedente){ 
    if(precedente == LOW){lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Raffrescatore");
        delay(2000);
        digitalWrite(3, HIGH);
        digitalWrite(2, LOW);
    } else { 
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Riscaldamento");
        delay(2000);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
    }
 }
}