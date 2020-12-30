/*
  Ini adalah program untuk membuat membuat menu dengan LCD 16x2 I2C
  Menggunakan 3 tombol
  
  silahkan kunjungi
  emrizkis.wordpress.com

*/



#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define B_UP    2
#define B_OK    3
#define B_DOWN  4

#define TEKAN   LOW
#define BOUNCE  50

void setup()
{
  lcd.init();
  lcd.backlight();

  pinMode(B_UP, INPUT_PULLUP);
  pinMode(B_DOWN, INPUT_PULLUP);
  pinMode(B_OK, INPUT_PULLUP);
}


void loop()
{

  if (digitalRead(B_OK) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_OK) == TEKAN) {

    }
    lcd.clear();
    menuSetting();
  }

  lcd.setCursor(0, 0);
  lcd.print("   MENU TOMBOL");
  lcd.setCursor(0, 1);
  lcd.print("[UP] [OK] [DOWN]");

}

void menuSetting() {
setMENU1:
  if (digitalRead(B_OK) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_OK) == TEKAN) {

    }
    lcd.clear();
    goto setSUBMENU1;
  }
  else if (digitalRead(B_UP) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_UP) == TEKAN) {

    }
    goto setMENU4;
  }
  else if (digitalRead(B_DOWN) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_DOWN) == TEKAN) {

    }
    goto setMENU2;
  }




  lcd.setCursor(0, 0);
  lcd.print(">MENU 1");

  lcd.setCursor(0, 1);
  lcd.print(" MENU 2");

  goto setMENU1;

setMENU2:
  if (digitalRead(B_OK) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_OK) == TEKAN) {

    }
    lcd.clear();
    goto setSUBMENU2;
  }
  else if (digitalRead(B_UP) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_UP) == TEKAN) {

    }
    goto setMENU1;
  }
  else if (digitalRead(B_DOWN) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_DOWN) == TEKAN) {

    }
    goto setMENU3;
  }


  lcd.setCursor(0, 0);
  lcd.print(" MENU 1");

  lcd.setCursor(0, 1);
  lcd.print(">MENU 2");

  goto setMENU2;

setMENU3:
  if (digitalRead(B_OK) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_OK) == TEKAN) {

    }
    lcd.clear();
    goto setSUBMENU3;
  }
  else if (digitalRead(B_UP) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_UP) == TEKAN) {

    }
    goto setMENU2;
  }
  else if (digitalRead(B_DOWN) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_DOWN) == TEKAN) {

    }
    goto setMENU4;
  }

  lcd.setCursor(0, 0);
  lcd.print(">MENU 3");

  lcd.setCursor(0, 1);
  lcd.print(" MENU 4");

  goto setMENU3;

setMENU4:
  if (digitalRead(B_OK) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_OK) == TEKAN) {

    }
    lcd.clear();
    goto setSUBMENU4;
  }
  else if (digitalRead(B_UP) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_UP) == TEKAN) {

    }
    goto setMENU3;
  }
  else if (digitalRead(B_DOWN) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_DOWN) == TEKAN) {

    }
    goto setMENU1;
  }



  lcd.setCursor(0, 0);
  lcd.print(" MENU 3");

  lcd.setCursor(0, 1);
  lcd.print(">MENU 4");


  goto setMENU4;



  //------------------------------------------SET SUBMENU--------------------------------//

setSUBMENU1:
  if (digitalRead(B_OK) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_OK) == TEKAN) {

    }
    lcd.clear();
    goto setMENU1;
  }
  lcd.setCursor(0,0);
  lcd.print("   SUBMENU1");

  goto setSUBMENU1;

setSUBMENU2:
  if (digitalRead(B_OK) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_OK) == TEKAN) {

    }
    lcd.clear();
    goto setMENU2;
  }
  lcd.setCursor(0,0);
  lcd.print("   SUBMENU2");
  
  goto setSUBMENU2;

setSUBMENU3:
  if (digitalRead(B_OK) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_OK) == TEKAN) {

    }
    lcd.clear();
    goto setMENU3;
  }
  lcd.setCursor(0,0);
  lcd.print("   SUBMENU3");
  
  goto setSUBMENU3;

setSUBMENU4:
  if (digitalRead(B_OK) == TEKAN) {
    delay(BOUNCE);
    while (digitalRead(B_OK) == TEKAN) {

    }
    lcd.clear();
    goto setMENU4;
  }
  lcd.setCursor(0,0);
  lcd.print("   SUBMENU4");
  
  goto setSUBMENU4;
}
