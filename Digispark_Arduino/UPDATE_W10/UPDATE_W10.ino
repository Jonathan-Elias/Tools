#include "DigiKeyboardPtBr.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(600);
  DigiKeyboardPtBr.print("chrome.exe");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("fakeupdate.net/win10ue/");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.sendKeyStroke(KEY_F11);
  for(;;){ /*empty*/ }
}
