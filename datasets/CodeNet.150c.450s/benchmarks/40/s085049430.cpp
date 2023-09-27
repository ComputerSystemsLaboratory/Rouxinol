#include <iostream>
#include <string>
#include <vector>

void update(int* source, int* dest, int size) {
  for (int i = 0; i < size; i++) {
    dest[i] = source[i];
  }
}

void rollToNorth(int* dice) {
  int buf[6];
  buf[2] = dice[0];
  buf[4] = dice[1];
  buf[1] = dice[2];
  buf[3] = dice[3];
  buf[0] = dice[4];
  buf[5] = dice[5];
  update(buf, dice, 6);
}
void rollToEast(int* dice) {
  int buf[6];
  buf[3] = dice[0];
  buf[5] = dice[1];
  buf[2] = dice[2];
  buf[1] = dice[3];
  buf[4] = dice[4];
  buf[0] = dice[5];
  update(buf, dice, 6);
}
void rollToSouth(int* dice) {
  int buf[6];
  buf[4] = dice[0];
  buf[2] = dice[1];
  buf[0] = dice[2];
  buf[3] = dice[3];
  buf[1] = dice[4];
  buf[5] = dice[5];
  update(buf, dice, 6);
}
void rollToWest(int* dice) {
  int buf[6];
  buf[5] = dice[0];
  buf[3] = dice[1];
  buf[2] = dice[2];
  buf[0] = dice[3];
  buf[4] = dice[4];
  buf[1] = dice[5];
  update(buf, dice, 6);
}

int main() {
  // top, bottom, north, east, south, west.
  int dice[6] = {1, 6, 5, 3, 2, 4};
  std::vector<int> numbers;
  for (int i = 0; i < 6; i++) {
    int buf;
    std::cin >> buf;
    numbers.push_back(buf);
  }
  std::string commands;
  std::cin >> commands;
  for (auto& c : commands) {
    if (c == 'N') {
      rollToNorth(dice);
    } else if (c == 'E') {
      rollToEast(dice);
    } else if (c == 'S') {
      rollToSouth(dice);
    } else if (c == 'W') {
      rollToWest(dice);
    }
  }
  std::cout << numbers[dice[0] - 1] << std::endl;
  return 0;
}

