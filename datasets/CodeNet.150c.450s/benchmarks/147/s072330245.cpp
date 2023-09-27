#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false); 
  cin.tie(0);
  int n;
  cin >> n;
  int cnt[n + 1];
  memset(cnt, 0, sizeof cnt);
  for (int x = 1; x * x <= n; x++) {
    for (int y = 1; x * x + y * y + x * y <= n; y++) {
      for (int z = 1; x * x + y * y + z * z + x * y + y * z + z * x <= n; z++) {
        ++cnt[x * x + y * y + z * z + x * y + y * z + z * x];
      }
    }
  } 
  for (int i = 1; i <= n; i++) {
    cout << cnt[i] << '\n';
  }
  return 0;
}