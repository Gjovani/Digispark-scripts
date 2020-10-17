#include "DigiKeyboard.h"

const int win_lock_pin = 2;

void setup() {
  pinMode(win_lock_pin, INPUT);
}

void loop() {
  if(digitalRead(win_lock_pin) == HIGH){
    DigiKeyboard.sendKeyStroke(KEY_L, MOD_GUI_LEFT);
    DigiKeyboard.delay(400);
  }
}
