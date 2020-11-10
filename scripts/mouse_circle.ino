#include <DigiMouse.h>

void setup() {
  DigiMouse.begin();
}

int step = 0;
double stepsize = PI / 100;
int oldx = 0;
int oldy = 0;
int rad = 100;

void loop() {
  int x = (cos(stepsize * step) * rad);
  int y = (sin(stepsize * step) * rad);

  DigiMouse.moveY(y - oldy);
  DigiMouse.moveX(x - oldx);
  DigiMouse.update();
  DigiMouse.delay(10);

  oldx = x;
  oldy = y;

  step ++;
  if (step == 201){
    step = 0;
    delay(5);
  }
}
