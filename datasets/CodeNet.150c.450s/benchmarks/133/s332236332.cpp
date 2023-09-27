#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_(i, n, m) for (int i = n; i < (int)(m); i++)
#define all(v) v.begin(), v.end()
#define int long long
#define stoi stoll
//#define _GLIBCXX_DEBUG

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
  
  int score = 0;
  vector<int> lt(26, -1);
  rep(i, D) {
    score += s[i][t[i]];
    lt[t[i]] = i;
    rep(j, 26) score -= c[j]*(i-lt[j]);
    cout << score << endl;
  }
    

}