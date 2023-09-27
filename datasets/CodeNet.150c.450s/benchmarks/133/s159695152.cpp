#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_(i, n, m) for (int i = n; i < (int)(m); i++)
#define all(v) v.begin(), v.end()
#define int long long
#define stoi stoll
//#define _GLIBCXX_DEBUG

int score(int d, vector<int> &c, vector<vector<int>> &s, vector<int> &lt, int t, int sc) {
  int score = sc;
  score += s[d][t];
  lt[t] = d;
  rep(j, 26) score -= c[j]*(d-lt[j]);
  return score;
}

signed main() {
  int D; cin >> D;
  vector<int> c(26);
  rep(i, 26) cin >> c[i];
  vector<vector<int>> s(D, vector<int>(26));
  rep(i, D) rep(j, 26) cin >> s[i][j];
  vector<int> t(D);
  rep(i, D) {
    cin >> t[i];
    t[i]--;
  }
  
  int sc = 0;
  vector<int> lt(26, -1);
  rep(i, D) {
    sc = score(i, c, s, lt, t[i], sc);
    cout << sc << endl;
  }
    

}