#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false); 
  cin.tie(0);
  int n;
  cin >> n;
  function<bool(int, int, int, int)> ok = [&](int x, int y, int z, int n) {
    return z > 0 && x * x + y * y + z * z + x * y + y * z + z * x == n;
  };
  for (int i = 1; i <= n; i++) {
    int res = 0;
    for (int x = 1; x * x <= i; x++) {
      for (int y = 1; y * y <= i; y++) {
        // z ^ 2 + yz + zx = m
        // z ^ 2 + (y + x)z = m
        // z ^ 2 + (y + x)z - m;
        int c = i - x * x - y * y - x * y;
        int b = x + y;
        int z1 = (-b + sqrt(b * b - 4 * -c)) / 2;
        int z2 = (-b - sqrt(b * b - 4 * -c)) / 2;
        res += ok(x, y, z1, i);
        res += z1 != z2 && ok(x, y, z2, i);
      }
    }
    cout << res << '\n';
  }
  return 0;
}