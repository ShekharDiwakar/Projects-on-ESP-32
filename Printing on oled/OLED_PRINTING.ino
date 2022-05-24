#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);




void setup() {
  // put your setup code here, to run once:
  u8g2.begin();
  // put your main code here, to run repeatedly:
  // u8g2.clearBuffer();
  
  // Draw bitmap on the screen
  //draw();
  
}

void loop() {
  u8g2.clearBuffer();
  
  u8g2.setFont(u8g2_font_4x6_tf);
  u8g2.setCursor(40,30);
  u8g2.println("SHEKHAR");
  u8g2.setCursor(60,50);
  u8g2.println("DIWAKAR");
  u8g2.sendBuffer();
}
