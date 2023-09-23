#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  while (cin >> n, n) {

    bool c[30][30] = {false};
    int y = 10, x = 10;

    for (int i = 0; i < n; ++i) {
      int a, b;
      cin >> a >> b;
      c[b][a] = true;
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
      char a;
      int b, dx = 0, dy = 0;
      cin >> a >> b;
      if (a == 'S') dy = -1;
      if (a == 'N') dy = 1;
      if (a == 'W') dx = -1;
      if (a == 'E') dx = 1;
      for (int j = 0; j < b; ++j) {
        x += dx;
        y += dy;
        c[y][x] = false;
      }
    }

    bool f = true;
    for (int i = 0; i < 30; ++i) {
      for (int j = 0; j < 30; ++j) {
        if (c[i][j]) f = false;
      }
    }

    cout << (f ? "Yes" : "No") << endl;
  }
}