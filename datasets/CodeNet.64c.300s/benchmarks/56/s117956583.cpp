#include<iostream>

using namespace std;

#define rep(i, n) for (int i = 0; i < int(n); ++i)

int main() {
  int t;
  cin >> t;
  while (t--) {
    int y, m, d;
    cin >> y >> m >> d;
    int res = (999 - y) * 200 + (10 - m) * 20 + (21 - d);
    rep (i, 1000) if (i % 3 > 0) rep (j, 10) if (j % 2 == 1) {
	if (y < i || (y == i && m <= j + 1)) --res;
    }
    cout << res << endl;
  }
  return 0;
}