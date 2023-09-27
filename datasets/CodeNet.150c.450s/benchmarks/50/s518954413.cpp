#include <bits/stdc++.h>
using namespace std;

int main() {
  int p, cnt;
  while (cin >> p) {
    if (p == 0) {
      break;
    }
    cnt = 0;
    int otsu = 1000 - p;
    if (otsu >= 500) {
      otsu -= 500;
      cnt++;
    }

    if (otsu >= 100) {
      cnt += otsu / 100;
      otsu -= otsu / 100 * 100;
    }

    if (otsu >= 50) {
      cnt += otsu / 50;
      otsu -= otsu / 50 * 50;
    }

    if (otsu >= 10) {
      cnt += otsu / 10;
      otsu -= otsu / 10 * 10;
    }

    if (otsu >= 5) {
      cnt += otsu / 5;
      otsu -= otsu / 5 * 5;
    }
    if (otsu >= 1) {
      cnt += otsu;
    }
    cout << cnt << endl;
  }
}

