//Hello World program for the LCD20x4 display

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define BACKLIGHT_PIN 3

LiquidCrystal_I2C lcd(0x3F,2,1,0,4,5,6,7,3,POSITIVE);  // Set the LCD I2C address
//LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3,POSITIVE);

void setup () { 
    lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
    lcd.setBacklight(HIGH);
    lcd.begin(20,4);               // initialize the lcd 

    lcd.setCursor(0,0);
    lcd.clear();
    lcd.print("Hello World");
}

void loop () {

}
