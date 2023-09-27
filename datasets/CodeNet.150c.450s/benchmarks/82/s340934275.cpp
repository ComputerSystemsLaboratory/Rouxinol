#include <bits/stdc++.h>
using namespace std;

struct Dice {
  int label[6];
  void swap(int a, int b, int c, int d) {
    int temp = label[a];
    label[a] = label[b];
    label[b] = label[c];
    label[c] = label[d];
    label[d] = temp;
  }
  void roll(char dir) {
    switch (dir) {
    case 'N': swap(0, 1, 5, 4); break;
    case 'E': swap(0, 3, 5, 2); break;
    case 'W': swap(0, 2, 5, 3); break;
    case 'S': swap(0, 4, 5, 1); break;
    }
  }
};

int main() {
  Dice dice;
  for (int i = 0; i < 6; i++) {
    cin >> dice.label[i];
  }
  int q, a, b;
  cin >> q;
  while (q--) {
    cin >> a >> b;
    for (auto& dir : "NNNENNN") {
      if (dice.label[1] == b) break;
      dice.roll(dir);
    }
    while (dice.label[0] != a) {
      dice.roll('E');
    }
    cout << dice.label[2] << "\n";
  }
}
