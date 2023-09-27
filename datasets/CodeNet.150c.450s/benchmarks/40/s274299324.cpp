#include <iostream>

using namespace std;

struct Dice {
  int values[6];

  int top;
  int bottom;
  int front;
  int back;
  int left;
  int right;

  void Init() {
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

  void Next(char d) {
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
  }
};

int main() {
  Dice dice;
  dice.Init();
  for (int i = 0; i < 6; ++i) {
    cin >> dice.values[i];
  }
  string ops;
  cin >> ops;
  for (size_t i = 0; i < ops.size(); ++i) {
    dice.Next(ops[i]);
  }

  cout << dice.Value() << endl;
  return 0;
}