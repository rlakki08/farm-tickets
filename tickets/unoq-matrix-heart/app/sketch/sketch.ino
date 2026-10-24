#include <Arduino_LED_Matrix.h>

Arduino_LED_Matrix matrix;

uint8_t heart[104] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 7, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0,
  0, 7, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 0,
  0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0,
  0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0,
  0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0,
  0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0
};

void setup() {
  matrix.begin();
  matrix.setGrayscaleBits(3);
  matrix.draw(heart);
}

void loop() {
  matrix.draw(heart);
  delay(1000);
}
