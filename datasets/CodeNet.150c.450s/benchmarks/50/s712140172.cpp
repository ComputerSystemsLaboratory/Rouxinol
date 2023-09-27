#include <iostream>

using namespace std;

int main() {
  for (;;) {
    int m;
    cin >> m;
    if (!m) return 0;
    m = 1000 - m;
    int r = 0, c[6] = { 500, 100, 50, 10, 5, 1 };
    for (int i = 0; i < 6; i++) {
      r += m / c[i];
      m %= c[i];
    }
    cout << r << endl;
  }
}