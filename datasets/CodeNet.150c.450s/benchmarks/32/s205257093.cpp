#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int m, nmin, nmax;
    cin >> m >> nmin >> nmax;
    if (m == 0 && nmin == 0 && nmax == 0) break;
    vector<int> P(m);
    for (int i = 0; i < m; i++) cin >> P.at(i);
    int ans = nmin, maxgap = 0;
    for (int i = nmin - 1; i < nmax; i++) {
      if (maxgap <= P.at(i) - P.at(i + 1)) {
        maxgap = P.at(i) - P.at(i + 1);
        ans = i + 1;
      }
    }
    cout << ans << endl;
  }
}
