#include <iostream>
#include <string>

using namespace std;

class Dice {
public:
  int label[6];
  void E(int label[]) {
    int rotate = label[0];
    label[0] = label[3];
    label[3] = label[5];
    label[5] = label[2];
    label[2] = rotate;
  }
  void N(int label[]) {
    int rotate = label[0];
    label[0] = label[1];
    label[1] = label[5];
    label[5] = label[4];
    label[4] = rotate;
  }
  void S(int label[]) {
    int rotate = label[0];
    label[0] = label[4];
    label[4] = label[5];
    label[5] = label[1];
    label[1] = rotate;
  }
  void W(int label[]) {
    int rotate = label[0];
    label[0] = label[2];
    label[2] = label[5];
    label[5] = label[3];
    label[3] = rotate;
  }
};

int main() {
  Dice dice;
  for (int i = 0; i < 6; i++) {
    cin >> dice.label[i];
  }
  string c;
  cin >> c;
  for (int i = 0; i < c.size(); i++) {
    if (c[i] == 'E') {
      dice.E(dice.label);
    } else if (c[i] == 'N') {
      dice.N(dice.label);
    } else if (c[i] == 'S') {
      dice.S(dice.label);
    } else if (c[i] == 'W') {
      dice.W(dice.label);
    }
  }
  cout << dice.label[0] << endl;
  return 0;
}
