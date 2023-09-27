#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  // const int C = 26;
  int D;
  cin >> D;

  vector<int> C(26);  // 0 to 25
  rep(i, 26) {
    cin >> C.at(i);
  }

  vector<vector<int>> S(D, vector<int>(26));  // 0 to 364, 0 to 25
  rep(i, D) {
    rep(j, 26) {
      cin >> S.at(i).at(j);
    }
  }

  int ans = 0;
  vector<int> L(26, 0);  // 0 to 25
  for (int d = 1; d <= D; d++) {
    // 1 to 365
    int t;  // 1 to 26
    cin >> t;
    L.at(t - 1) = d;

    ans += S.at(d - 1).at(t - 1);
    rep(i, 26) {
      ans -= C.at(i) * (d - L.at(i));
    }
    cout << ans << endl;
  }
}
