#include "DigiKeyboard.h"

const int button_mic = 0;
const int button_cam = 2;

void setup() {
  pinMode(button_mic, INPUT);
  pinMode(button_cam, INPUT);
}

void loop() {
  if(digitalRead(button_mic) == HIGH){
    //toggle microphone on/off: CTRL+D
    DigiKeyboard.sendKeyStroke(KEY_D, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(200);
  }

  if(digitalRead(button_cam) == HIGH){
    //toggle camera on/off: CTRL+E
    DigiKeyboard.sendKeyStroke(KEY_E, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(200);
  }

DigiKeyboard.delay(100);

}
