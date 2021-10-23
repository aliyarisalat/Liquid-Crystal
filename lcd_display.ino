
# include <LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,6,5,4,3);

void setup()
{
  lcd.begin(16,2);

}

void loop()
{
  lcd.print(" AbdulHaseeb Khan");
  lcd.setCursor(0,1);
  lcd.print(millis() /1000);
}
