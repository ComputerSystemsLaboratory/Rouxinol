#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <algorithm>
#include <cassert>
#include <cfloat>
#include <complex>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define Sort(v) sort(v.begin(), v.end())
#define Reverse(v) reverse(v.begin(), v.end())
#define Lower_bound(v, x) \
  distance(v.begin(), lower_bound(v.begin(), v.end(), x))
#define Upper_bound(v, x) \
  distance(v.begin(), upper_bound(v.begin(), v.end(), x))

using ll = long long;
using ull = unsigned long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using vll = vector<ll>;
using vP = vector<P>;
using vT = vector<T>;
using vvll = vector<vector<ll>>;
using vvP = vector<vector<P>>;
using dqll = deque<ll>;

ll dx[9] = {-1, 1, 0, 0, -1, -1, 1, 1, 0};
ll dy[9] = {0, 0, -1, 1, -1, 1, -1, 1, 0};

const ll INF = 1LL << 50;

const ll mod = 1e9 + 7;

void fall(vvll& mp) {
  auto fallitr = [&](ll x) {
    ll h = mp.size();
    for (ll ii = h - 1; ii >= 1; ii--) {
      for (ll jj = 0; jj < ii; jj++) {
        if (mp[jj + 1][x] == -1 && mp[jj][x] != -1)
          swap(mp[jj+1][x], mp[jj][x]);
      }
    }
    return;
  };
  rep(j, 5) { fallitr(j); }  // j
}

int main() {
  while (true) {
    ll h;
    cin >> h;
    if (h == 0) break;

    vvll mp(h, vll(5));
    rep(i, h) rep(j, 5) cin >> mp[i][j];

    ll ans = 0;
    bool cont;
    do {
      cont = false;
      rep(i, h) {
        rep(j, 3) {
          if (mp[i][j] == -1) continue;
          bool era = mp[i][j] == mp[i][j + 1] && mp[i][j + 1] == mp[i][j + 2];
          if (era) {
            cont = true;
            ll mv = 3;
            ll mc = mp[i][j];
            mp[i][j] = mp[i][j + 1] = mp[i][j + 2] = -1;
            if (j + 3 < 5 && mc == mp[i][j + 3]) {
              mp[i][j + 3] = -1;
              mv++;
              if (j + 4 < 5 && mc == mp[i][j + 4]) {
                mp[i][j + 4] = -1;
                mv++;
              }
            }
            ans += mv * mc;
          }
        }  // j
      }    // i

      // cout << "before fall" << endl;
      // rep(i, h) {
      //   rep(j, 5) printf("%3lld ", mp[i][j]);
      //   cout << endl;
      // }
      if (cont) fall(mp);

      // cout << "after fall" << cont << endl;
      // rep(i, h) {
      //   rep(j, 5) printf("%3lld ", mp[i][j]);
      //   cout << endl;
      // }

    } while (cont);
    cout << ans << endl;
  }

  return 0;
}

