#include <iostream>
using namespace std;

int main() {
  int n, x, a, b, c, d;

  for (;;) {
    cin >> n >> x;

    if (n == x && n == 0) {
      break;
    }

    d = 0;

    for (a = 1; a <= n; a++) {
      for (b = a + 1; b <= n; b++) {
        for (c = b + 1; c <= n; c++) {
          if (a == b || b == c || a == c) {
            continue;
          }

          if ((a + b + c) == x) {
            d++;
          }
        }
      }
    }

    cout << d << endl;
  }

  return 0;
}