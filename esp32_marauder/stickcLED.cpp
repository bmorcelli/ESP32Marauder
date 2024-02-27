#include "stickcLED.h"
// NB M5Stick C Plus LED is active low, so digitalWrite() calls are inverted
void stickcLED::RunSetup() {
    pinMode(STICKC_LED_PIN, OUTPUT);

if (!settings_obj.loadSetting<bool>("EnableLED")) {
    digitalWrite(STICKC_LED_PIN, LOW);
    return;
}

delay(50);

  digitalWrite(STICKC_LED_PIN, HIGH);
  delay(500);
  digitalWrite(STICKC_LED_PIN, LOW);
  delay(250);
  digitalWrite(STICKC_LED_PIN, HIGH);
  delay(500);
  digitalWrite(STICKC_LED_PIN, LOW);
  delay(250);
  digitalWrite(STICKC_LED_PIN, HIGH);
  delay(500);
  digitalWrite(STICKC_LED_PIN, LOW);
}

void stickcLED::attackLED() {
  if (!settings_obj.loadSetting<bool>("EnableLED"))
    return;
    
  digitalWrite(STICKC_LED_PIN, HIGH);
  delay(300);
  digitalWrite(STICKC_LED_PIN, LOW);
}

void stickcLED::sniffLED() {
  if (!settings_obj.loadSetting<bool>("EnableLED"))
    return;
    
  digitalWrite(STICKC_LED_PIN, HIGH);
  delay(300);
  digitalWrite(STICKC_LED_PIN, LOW);
}

void stickcLED::offLED() {
  if (!settings_obj.loadSetting<bool>("EnableLED"))
    return;
  
  digitalWrite(STICKC_LED_PIN, LOW);
}

void stickcLED::main() {
  // do nothing
}
