#include <iostream>
#include <utility>
#include <string>

struct Dice
{
  int numbers[6];

  Dice (int n1, int n2, int n3, int n4, int n5, int n6) {
    numbers[0] = n1;
    numbers[1] = n2;
    numbers[2] = n3;
    numbers[3] = n4;
    numbers[4] = n5;
    numbers[5] = n6;
  }

  void move(char dir){
    if (dir == 'N') {
      setNum(numbers[1], numbers[0], numbers[2], numbers[5], numbers[3], numbers[4]);
    }
    if (dir == 'S') {
      setNum(numbers[4], numbers[5], numbers[2], numbers[0], numbers[3], numbers[1]);
    }
    if (dir == 'W') {
      setNum(numbers[2], numbers[4], numbers[5], numbers[1], numbers[0], numbers[3]);
    }
    if (dir == 'E') {
      setNum(numbers[3], numbers[4], numbers[0], numbers[1], numbers[5], numbers[2]);
    }
  }

  void roll(std::string dir){
    if (dir == "vertical") {
      setNum(numbers[1], numbers[0], numbers[2], numbers[5], numbers[3], numbers[4]);
    }
    if (dir == "horizontal") {
      setNum(numbers[0], numbers[2], numbers[1], numbers[3], numbers[4], numbers[5]);
    }
  }

  void setNum(int top, int north, int east, int south, int west, int bottom) {
    numbers[0] = top;
    numbers[4] = north;
    numbers[2] = east;
    numbers[1] = south;
    numbers[3] = west;
    numbers[5] = bottom;
  }
};

int main() {
  int n1, n2, n3, n4, n5, n6;
  std::cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
  Dice dice(n1, n2, n3, n4, n5, n6);
  int n;
  std::cin >> n;
  while (n--) {
    int a, b;
    std::cin >> a >> b;
    if (a == dice.numbers[2] || a == dice.numbers[3]) {
      dice.roll("horizontal");
    }
    while (a != dice.numbers[0]) {
      dice.roll("vertical");
    }
    while (b != dice.numbers[1]) {
      dice.roll("horizontal");
    }
    std::cout << dice.numbers[2] << "\n";
  }
}
