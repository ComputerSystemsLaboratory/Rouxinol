#include <iostream>
#include <stdio.h>
#include <utility>
using namespace std;

class Dice{
public:
  int value[6];
  void roll(char _order) {
    switch(_order) {
    case 'N':
      swap(value[4], value[0]);
      swap(value[0], value[1]);
      swap(value[1], value[5]);
      break;
    case 'E':
      swap(value[2], value[0]);
      swap(value[0], value[3]);
      swap(value[3], value[5]);
      break;
    case 'S':
      swap(value[1], value[0]);
      swap(value[0], value[4]);
      swap(value[4], value[5]);
      break;
    case 'W':
      swap(value[0], value[2]);
      swap(value[2], value[5]);
      swap(value[5], value[3]);
      break;
    }
  }
};

int main() {
  Dice dice;
  for (int i=0;i<6;i++)
    cin >> dice.value[i];
  char c;
  getchar();
  while ((c = getchar()) != '\n')
    dice.roll(c);
  cout << dice.value[0] << endl;
}

