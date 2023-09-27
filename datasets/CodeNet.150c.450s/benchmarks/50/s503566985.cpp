#include <bits/stdc++.h>
using namespace std;
constexpr int c[] = { 500, 100, 50, 10, 5, 1 };

int main() {
  int a;
  while (cin >> a, a) {
    int b = 1000 - a;
    int ans = 0;
    for (int i = 0; i < 6; i++) {
      ans += b / c[i];
      b %= c[i];
    }
    cout << ans << "\n";
  }
}
