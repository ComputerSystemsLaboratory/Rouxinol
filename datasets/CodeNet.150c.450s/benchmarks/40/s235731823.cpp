#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

struct Dice {
  string input;
  size_t pos;
  int values[6];

  int top;
  int bottom;
  int front;
  int back;
  int left;
  int right;

  void Init() {
    pos = 0;
    top = 1;
    bottom = 6;
    front = 2;
    back = 5;
    left = 4;
    right = 3;
  }

  int Value() const {
    return values[top - 1];
  }

  bool Done() const {
    return pos == input.size();
  }

  void Next() {
    const char d = input[pos];
    int temp = 0;
    switch (d) {
      case 'S':
        temp = front;
        front = top;
        top = back;
        back = bottom;
        bottom = temp;
        break;
      case 'N':
        temp = back;
        back = top;
        top = front;
        front = bottom;
        bottom = temp;
        break;
      case 'E':
        temp = right;
        right = top;
        top = left;
        left = bottom;
        bottom = temp;
        break;
      case 'W':
        temp = left;
        left = top;
        top = right;
        right = bottom;
        bottom = temp;
        break;
    }
    ++pos;
  }
};

int main() {
  Dice dice;
  dice.Init();
  for (int i = 0; i < 6; ++i) {
    cin >> dice.values[i];
  }
  cin >> dice.input;

  for (;;) {
    if (dice.Done()) {
      break;
    }
    dice.Next();
  }
  cout << dice.Value() << endl;
  return 0;
}