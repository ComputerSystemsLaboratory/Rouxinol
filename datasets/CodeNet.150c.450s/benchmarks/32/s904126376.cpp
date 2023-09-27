#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < n; ++i)

int main() {
  int M, Nmin, Nmax;
  while (cin >> M >> Nmin >> Nmax && M) {
    vector<int> P(M);
    REP(i, M) { cin >> P[i]; }
    int ans = 0, gap_max = 0;
    for (int i = Nmin; i <= Nmax; ++i) {
      int gap = P[i - 1] - P[i];
      if (gap >= gap_max) {
        ans = i, gap_max = gap;
      }
    }
    cout << ans << endl;
  }
  return 0;
}