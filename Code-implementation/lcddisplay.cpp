#include <LiquidCrystal.h>

LiquidCrystal lcd(6,7,8,9,10,11);

void setup()
{
  lcd.begin(16,2);
  lcd.print("Acorda! ");
  delay(2000);
  lcd.setCursor(0,1);
  lcd.print("Vai tomar cafe!");
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
