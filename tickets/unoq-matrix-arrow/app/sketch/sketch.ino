#include <Arduino_LED_Matrix.h>

Arduino_LED_Matrix matrix;

uint8_t arrow[104] = {
  0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0,
  0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0
};

void setup() {
  matrix.begin();
  matrix.setGrayscaleBits(3);
  matrix.draw(arrow);
}

void loop() {
  matrix.draw(arrow);
  delay(1000);
}
