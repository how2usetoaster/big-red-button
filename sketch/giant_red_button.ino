#include <Keyboard.h>

const char KEYS_TO_PRESS[] = { // ADD THE KEYS YOU WANT THE BUTTON TO PRESS INSIDE HERE
  KEY_LEFT_ALT,
  KEY_F4
};

const int BUTTON = 2; // SET THE PIN YOU WANT TO CONNECT THE BUTTON TO

void setup() {
  pinMode(BUTTON,INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  if (!digitalRead(BUTTON)) {
    for (int i;i<sizeof(KEYS_TO_PRESS);i++) {
      Keyboard.press(KEYS_TO_PRESS[i]);
    }
    delay(100);
    Keyboard.releaseAll();
  }
}
