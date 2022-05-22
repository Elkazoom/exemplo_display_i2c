#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
int valor= 123;

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.backlight();
}

void loop()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(" Primeira LINHA");
  lcd.setCursor(0, 1);
  lcd.print("Valor da var: ");
  lcd.setCursor(13, 1);
  lcd.print(valor);
  delay(1000);  
}
