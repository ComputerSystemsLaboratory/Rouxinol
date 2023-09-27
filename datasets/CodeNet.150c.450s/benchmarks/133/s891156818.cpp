#include <bits/stdc++.h>
#define rep(i,cc,n) for(int i=cc;i<=n;++i)
using namespace std;

int main() {
  int D;
  cin >> D;

  vector<int> c(26);
  rep(i,0,25) cin >> c[i];

  vector<vector<int>> s(D);
  rep(i,0,D-1) {
    vector<int> tmp(26);
    rep(j,0,25) cin >> tmp[j];
    s[i] = tmp;
  }

  vector<int> t(D);
  rep(i,0,D-1) cin >> t[i];

  int score = 0;
  map<int, int> last;
  rep(i,0,D-1) {
    int C = 0;
    rep(j,1,26) {
      if (t[i] == j) last[j] = 0;
      else last[j]++;
      C += c[j-1] * last[j];
    }
    score -= C;
    score += s[i][t[i]-1];
    cout << score << endl;
  }

  return 0;
}
