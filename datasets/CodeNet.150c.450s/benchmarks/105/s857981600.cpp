#line 1 "/mnt/c/Users/leafc/dev/compro/lib/template.hpp"


#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define ALL(v) (v).begin(), (v).end()
#define coutd(n) cout << fixed << setprecision(n)
#define ll long long int
#define vl vector<ll>
#define vi vector<int>
#define MM << " " <<

using namespace std;

template <class T> void say(bool val, T yes = "Yes", T no = "No") { cout << (val ? yes : no) << "\n"; }

template <class T> void chmin(T &a, T b) {
  if (a > b)
    a = b;
}

template <class T> void chmax(T &a, T b) {
  if (a < b)
    a = b;
}


#line 2 "tmp.cpp"

void solve() {
  int n;
  cin >> n;
  vl a(n);
  REP(i, n) { cin >> a[i]; }
  string s;
  cin >> s;

  vl basis;
  for (int i = n - 1; i >= 0; i--) {
    for (auto b : basis) {
      chmin(a[i], a[i] ^ b);
    }
    if (a[i]) {
      if (s[i] == '0') {
        basis.push_back(a[i]);
      } else {
        cout << 1 << endl;
        return;
      }
    }
  }
  cout << 0 << endl;
  return;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int t;
  cin >> t;
  REP(num, t) { solve(); }
  return 0;
}
