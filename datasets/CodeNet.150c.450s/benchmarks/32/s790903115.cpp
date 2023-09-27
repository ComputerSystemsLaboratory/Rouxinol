#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
#define int long long

signed main() {
  while (true) {
    int m, n1, n2;
    cin >> m >> n1 >> n2;
    if (!m && !n1 && !n2) return 0;
    int p[m];
    for (int i = 0; i < m; i++) {
      cin >> p[i];
    }
    int diff = p[n1 - 1] - p[n1];
    int ans = n1;
    for (int i = n1 + 1; i <= n2; i++) {
      int res = p[i - 1] - p[i];
      if (res >= diff) {
        diff = res;
        ans = i;
      }
    }
    cout << ans << endl;
  }
}

