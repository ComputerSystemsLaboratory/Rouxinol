#include <bits/stdc++.h>
using namespace std;

signed main() {
  int n;
  while (true) {
    cin >> n;
    if (n == 0) return 0;
    auto sum = 0;
    for (int i = 2;; i++) {
      auto base = i * (i + 1) / 2;
      if (base > n) break;
      if ((base - n) % i == 0) sum++;
    }
    cout << sum << "\n";
  }
}