#include <iostream>
#include <algorithm>

#define REP(i, n) for (int i = 0; i < n; i++)
#define debug(x) cerr << #x << " = " << (x) << endl;

using namespace std;

int main() {
  while (1) {
    int m, nmin, nmax, p[202], ans, maxgap;
    maxgap = -1;
    cin >> m >> nmin >> nmax;
		if (m==0 && nmin==0 && nmax==0) break;
    REP(i, m) cin >> p[i];
    sort(p, p + m);
    for (int i = m - nmax; i <= m - nmin; i++) {
      if (p[i] - p[i - 1] > maxgap) {
        ans = m - i;
        maxgap = p[i] - p[i - 1];
      }
    }
    cout << ans << endl;
  }
	return 0;
}

