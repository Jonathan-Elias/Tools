#include "DigiKeyboardPtBr.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(300);
  DigiKeyboardPtBr.print("chrome.exe");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("https://github.com/pbatard/rufus/releases/download/v3.15/rufus-3.15p.exe");
  DigiKeyboardPtBr.delay(2);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.print("chrome.exe");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(900);
  DigiKeyboardPtBr.print("https://fakeupdate.net/win10/");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.sendKeyStroke(KEY_F11);
  for(;;){ /*empty*/ }
}
