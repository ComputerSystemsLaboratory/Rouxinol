#include <bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define FOR(i, a, b) for (ll i = (signed)(a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define EREP(i, n) for (int i = (n)-1; i >= 0; --i)
#define MOD 1000000007
#define INF 93193111451418101
#define MIN -93193111451418101
#define EPS 1e-11
using namespace std;
typedef pair<ll, ll> P;
typedef pair<ll, P> TP;
int main() {
  ll n;
  map<char, P> m;
  m['N'] = P(0, 1);
  m['W'] = P(-1, 0);
  m['E'] = P(1, 0);
  m['S'] = P(0, -1);
  while (cin >> n && n) {
    bool f[21][21] = {};
    REP(i, n) {
      ll x, y;
      cin >> x >> y;
      f[x][y] = 1;
    }
    ll c;
    cin >> c;
    ll x = 10, y = 10;
    f[10][10] = 0;
    REP(i, c) {
      char h;
      ll cnt;
      cin >> h >> cnt;

      REP(j, cnt) {
        f[x + m[h].first][y + m[h].second] = 0;
        x = x + m[h].first;
        y = y + m[h].second;
      }
    }
    bool fl = 0;
    REP(i, 21) {
      REP(j, 21) {
        if (f[i][j])
          fl = 1;
      }
    }
    cout << (fl ? "No" : "Yes") << endl;
  }
}

