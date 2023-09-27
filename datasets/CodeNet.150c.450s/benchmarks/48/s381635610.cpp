#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
using namespace std;
signed main() {
  vector<int> m(1e6 + 1, 1<<30);
  const int n = 500;
  for (int x = 0; x < n; x++) {
    for (int y = 0; y < n; y++) {
      for (int z = 0; z < n; z++) {
        int t = x+y*y+z*z*z;
        if (t <= 1e6) {
          m[t] = min(m[t], x+y+z);
        }
      }
    }
  }
  int e;
  while (true) {
    cin >> e;
    if (e == 0) break;
    cout << m[e] << endl;
  }
}

