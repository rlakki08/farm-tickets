#include <Arduino_LED_Matrix.h>

Arduino_LED_Matrix matrix;

// 8x13 smiley, row-major, MSB first
const uint32_t smiley[4] = {
  0x0F80820A, 0x2840428A, 0x13904101, 0xF0000000
};

void setup() {
  matrix.begin();
  matrix.loadFrame(smiley);
}

void loop() {
  delay(1000);
}
