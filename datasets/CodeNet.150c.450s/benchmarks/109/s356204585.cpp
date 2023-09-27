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

template <class T> void say(bool val, T yes = "Yes", T no = "No") { cout << (val ? yes : no) << endl; }

template <class T> void chmin(T &a, T b) {
  if (a > b)
    a = b;
}

template <class T> void chmax(T &a, T b) {
  if (a < b)
    a = b;
}


#line 2 "tmp.cpp"

int calc2(string s) { return (s[0] - '0') * 10 + (s[1] - '0'); }

int calc(string s) {
  string h = s.substr(0, 2), m = s.substr(3, 2), sec = s.substr(6, 2);
  return calc2(h) * 3600 + calc2(m) * 60 + calc2(sec);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (true) {
    int n;
    cin >> n;
    if (n == 0)
      break;
    vector<int> imos(24 * 60 * 60, 0);

    REP(i, n) {
      string s, t;
      cin >> s >> t;
      imos[calc(s)]++;
      imos[calc(t)]--;
    }

    int size = imos.size();
    FOR(i, 1, size) { imos[i] += imos[i - 1]; }

    int ans = 0;
    REP(i, size) { chmax(ans, imos[i]); }
    cout << ans << endl;
  }
  return 0;
}

