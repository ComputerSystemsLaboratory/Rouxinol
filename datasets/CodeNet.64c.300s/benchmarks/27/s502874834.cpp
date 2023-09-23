#include <cstdio>
#include <iostream>

using namespace std;

static int count(int n, int x) {
  int s = 0;
  for (int i = 1; i <= n; ++i) {
    for (int j = i + 1; j <= n; ++j) {
      for (int k = j + 1; k <= n; ++k) {
        if (i + j + k == x)
          s += 1;
      }
    }
  }
  return s;
}

int main() {
  int n, x;
  for (;;) {
    cin >> n >> x;
    if (n == 0 && x == 0) {
      break;
    }
    cout << count(n, x) << endl;
  }
  return 0;
}