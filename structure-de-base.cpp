#include <Gamebuino-Meta.h>

void setup() {
  gb.begin();
}

void loop() {
  while(!gb.update());

  gb.display.clear();

  gb.display.setColor(RED);

  gb.display.print("hello, world\nbonjour, monde\nhola, mundo");
}