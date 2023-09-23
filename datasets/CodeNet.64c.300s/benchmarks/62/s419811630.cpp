#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n][m], b[m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  int ans;
  for (int i = 0; i < n; i++) {
    ans = 0;
    for (int j = 0; j < m; j++) {
      ans += a[i][j] * b[j];
    }
    cout << ans << '\n';
  }
  return 0;
}
