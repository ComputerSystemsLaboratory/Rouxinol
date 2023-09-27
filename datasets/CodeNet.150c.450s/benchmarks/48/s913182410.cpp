#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
using namespace std;
signed main() {
  int e; cin >> e;
  while (e!=0) {
    int m = INF;
    for (int z = 0; z*z*z <= e; z++) {
      for (int y = 0; z*z*z+y*y <= e; y++) {
        m = min(m, e+y+z-y*y-z*z*z);
      }
    }
    cout << m << endl;
    cin >> e;
  }
}

