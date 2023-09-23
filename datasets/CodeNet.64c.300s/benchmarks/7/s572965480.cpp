#include <iostream>
using namespace std;

enum Suit {
  S, H, C, D
};

int main() {
  int n, m, o, cards[4] = {};
  char c;

  cin >> n;

  while (n --> 0) {
    cin >> c >> m;
    switch (c) {
      case 'S': cards[S] |= 1 << m; break;
      case 'H': cards[H] |= 1 << m; break;
      case 'C': cards[C] |= 1 << m; break;
      case 'D': cards[D] |= 1 << m; break;
    }
  }

  for (n = 0; n < 4; n++) {
    for (m = 1; m <= 13; m++) {
      if (!(cards[n] & (1 << m))) {
        cout << "SHCD"[n] << ' ' << m << endl;
      }
    }
  }

  return 0;
}