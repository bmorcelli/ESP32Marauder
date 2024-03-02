#include "stickcLED.h"
// NB M5Stick C Plus LED is active low, so digitalWrite() calls are inverted

#define M5LED_ON HIGH
#define M5LED_OFF LOW

void stickcLED::RunSetup() {
    pinMode(STICKC_LED_PIN, OUTPUT);

if (!settings_obj.loadSetting<bool>("EnableLED")) {
    digitalWrite(STICKC_LED_PIN, M5LED_OFF);
    return;
}

delay(50);

  digitalWrite(STICKC_LED_PIN, M5LED_ON);
  delay(500);
  digitalWrite(STICKC_LED_PIN, M5LED_OFF);
  delay(250);
  digitalWrite(STICKC_LED_PIN, M5LED_ON);
  delay(500);
  digitalWrite(STICKC_LED_PIN, M5LED_OFF);
  delay(250);
  digitalWrite(STICKC_LED_PIN, M5LED_ON);
  delay(500);
  digitalWrite(STICKC_LED_PIN, M5LED_OFF);
}

void stickcLED::attackLED() {
  if (!settings_obj.loadSetting<bool>("EnableLED"))
    return;
    
  digitalWrite(STICKC_LED_PIN, M5LED_ON);
  delay(300);
  digitalWrite(STICKC_LED_PIN, M5LED_OFF);
}

void stickcLED::sniffLED() {
  if (!settings_obj.loadSetting<bool>("EnableLED"))
    return;
    
  digitalWrite(STICKC_LED_PIN, M5LED_ON);
  delay(300);
  digitalWrite(STICKC_LED_PIN, M5LED_OFF);
}

void stickcLED::offLED() {
  if (!settings_obj.loadSetting<bool>("EnableLED"))
    return;
  
  digitalWrite(STICKC_LED_PIN, M5LED_OFF);
}

void stickcLED::main() {
  // do nothing
}

