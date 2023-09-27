#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (ll)n; i++)
#define rep1(i, n) for (ll i = 1; i <= (ll)n; i++)
#define PI 3.14159265358979323846
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define pll pair<long long, long long>
using namespace std;
using ll = long long;
using ld = long double;

// グローバル変数（入力）
ll d, c[26], s[365][26],t[365],last[26];

void input() {
  cin >> d;
  rep(i, 26) { cin >> c[i]; }
  rep(i, d) {
    rep(j, 26) { cin >> s[i][j]; }
  }
  rep(i,d){
    cin >> t[i];
  }
}

// satisfactory decrease
ll satDec(ll date){
  ll ans=0;
  rep(i,26){
    ans+=c[i]*(date-last[i]);
  }
  return ans;
}

void solve() {
  ll sat = 0;
  rep(i, 26) { last[i] = -1; }
  rep(i,d){
    last[t[i]-1]=i;
    sat = sat + s[i][t[i]-1] - satDec(i);
    cout << sat << endl;
  }
}

int main() {
  input();
  solve();
  return 0;
}
