#include <Arduino_LED_Matrix.h>

Arduino_LED_Matrix matrix;

const char *diamond[8] = {
  "......#......",
  ".....#.#.....",
  "....#...#....",
  "...#.....#...",
  "...#.....#...",
  "....#...#....",
  ".....#.#.....",
  "......#......",
};

uint8_t frame[8 * 13];

void setup() {
  for (int r = 0; r < 8; r++) {
    for (int c = 0; c < 13; c++) {
      frame[r * 13 + c] = diamond[r][c] == '#' ? 1 : 0;
    }
  }
  matrix.begin();
  matrix.setGrayscaleBits(1);
  matrix.clear();
  matrix.draw(frame);
}

void loop() {
  matrix.draw(frame);
  delay(1000);
}
