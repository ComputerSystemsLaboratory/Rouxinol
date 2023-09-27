#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main() {
  int N, M, ans, d, p;
  while (cin >> N >> M, N) {
    vector< pair<int, int> > V;
    ans = 0;
    for (int i = 0; i < N; ++i) {
      cin >> d >> p;
      ans += d*p;
      V.push_back(make_pair(-p, d));
    }
    sort(V.begin(), V.end());
    for (int i = 0; i < N; ++i) {
      p = V[i].first;
      d = V[i].second;
      M -= d;
      ans += p*d;
      if (M <= 0) {
	ans += M*p;
	break;
      }
    }
    cout << ans << endl;
  }
  return 0;
}