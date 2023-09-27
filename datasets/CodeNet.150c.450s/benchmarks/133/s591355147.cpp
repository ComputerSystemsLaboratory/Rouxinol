#include <bits/stdc++.h>
#include <numeric>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, a, n) for (int i = (a); i < (n); ++i)
using namespace std;
using ll = long long;
using uint = unsigned int;
const ll mod = (ll)1e9 + 7;

int c[26];
int s[365][26];

int cal_sat(int d, vector<int> &t) {
  int sat = 0;
  int last[26];
  rep(i, 26) last[i] = -1;
  rep(i, d) {
    sat += s[i][t[i]];
    last[t[i]] = i;
    rep(j, 26) sat -= c[j] * (i - last[j]);
    cout << sat << endl;
  }
  return sat;
}

int main() {
  int d;
  cin >> d;
  rep(i, 26) cin >> c[i];
  rep(i, d) rep(j, 26) cin >> s[i][j];
  vector<int> t(d);
  rep(i, d) {
    cin >> t[i];
    t[i]--;
  }
  int sat = cal_sat(d, t);
  //cout << sat << endl;
  return 0;
}
