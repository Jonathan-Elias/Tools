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
  DigiKeyboardPtBr.print("powershell");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.print("Add-Computer -DomainName ribeirao.eurofarma.corp -Restart");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.print("INSERIR USUÁRIO");
  DigiKeyboardPtBr.sendKeyStroke(KEY_Tab);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.print("INSERIR SENHA");
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
