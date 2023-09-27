#include <iostream>
using namespace std;
int main() {
  int m, n_min, n_max, ans, d;
  while (cin >> m >> n_min >> n_max, m) {
    int P[m];
    ans = 0;
    for (int i = 0; i < m; ++i) cin >> P[i];
    d = 0;
    for (int i = n_min-1; i < n_max; ++i) {
      if (P[i] - P[i+1] >= d) {
	ans = i+1;
	d = P[i] - P[i+1];
      }
    }
    cout << ans << endl;
  }
}