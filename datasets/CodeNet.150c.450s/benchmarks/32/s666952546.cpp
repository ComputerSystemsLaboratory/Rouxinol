#include <iostream>
#include <vector>
using namespace std;

int main (){
  int m, nmin, nmax;
  while (cin >> m >> nmin >> nmax, m) {
    vector<int> P(m);
    int ans = 0;
    int score = 0;
    for (int i = 0; i < m; i++) cin >> P[i];
    for (int n = nmax; n >= nmin; n--) {
      if (score < P[n - 1] - P[n]) {
	score = P[n - 1] - P[n];
	ans = n;
      }
    }
    cout << ans << endl;
  }
  return 0;
}