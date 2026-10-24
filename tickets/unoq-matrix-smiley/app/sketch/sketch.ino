#include <Arduino_LED_Matrix.h>

Arduino_LED_Matrix matrix;

uint8_t smiley[104] = {
  0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0,
  0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0,
  0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0,
  0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
  0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0,
  0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0,
  0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0,
  0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0
};

void setup() {
  matrix.begin();
  matrix.setGrayscaleBits(1);
  matrix.draw(smiley);
}

void loop() {
  matrix.draw(smiley);
  delay(1000);
}
