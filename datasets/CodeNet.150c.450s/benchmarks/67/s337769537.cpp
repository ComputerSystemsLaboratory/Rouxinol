#include <iostream>

using namespace std;

int nextInt() { int d; cin >> d; return d; }

int solve(int n) {
  int ret = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      if ((i + j) * (j - i + 1) / 2 == n) {
        ret++;
      }
    }
  }
  return ret;
}

int main() {
  while (true) {
    int n = nextInt();
    if (n == 0) break;
    cout << solve(n) << endl;
  }
  return 0;
}