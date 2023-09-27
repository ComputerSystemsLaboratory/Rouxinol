#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int f(int x, int y, int z) {
  return x*x + y*y + z*z + x*y + y*z + z*x;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int max = 100;
  int ans[70001] = {0};
  for(int x = 1; x <= max; x ++) {
    for(int y = 1; y <= max; y ++) {
      for(int z = 1; z <= max; z ++) {
        ans[f(x, y, z)] ++;
      }
    }
  }
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cout << ans[i] << '\n';
  }
  return 0;
}
