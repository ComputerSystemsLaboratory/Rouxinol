#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solve(vector<vll> &c, vector<pii> &m, int s, int e1) {
  int e = e1 - 1;
  if (c[s][e1] != 0) return c[s][e1];
  
  if (e1 - s == 2) {
    c[s][e1] = m[s].first * m[s].second * m[e].second;
    return c[s][e1];
  }

  ll n_calc = LLONG_MAX;
  for (int i = s + 1; i < e1; i++) {
    ll total = 0;
    
    if (i - s > 1) {
      c[s][i] = solve(c, m, s, i);
      total += c[s][i];
    }
    
    if (e1 - i > 1) {
      c[i][e1] = solve(c, m, i, e1);
      total += c[i][e1];
    }

    total += m[s].first * m[i].first * m[e].second;
    
    n_calc = min(n_calc, total);
  }

  c[s][e1] = n_calc;
  return c[s][e1];
}

int main() {
  int n;
  cin >> n;

  vector<pii> m(n);
  rep(i, n) cin >> m[i].first >> m[i].second;

  if (n == 1) {
    cout << 0 << endl;
    return 0;
  }

  vector<vll> c(n + 1, vll(n + 1, 0));
  cout << solve(c, m, 0, n) << endl;
}

