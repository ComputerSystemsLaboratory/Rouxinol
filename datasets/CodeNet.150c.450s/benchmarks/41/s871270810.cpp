#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
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

const ll mod = 1000000007;

int main() {
  ll n, e;
  cin >> n >> e;
  vvll d(n, vll(n, INF));
  rep(i, e) {
    ll u, v, w;
    cin >> u >> v >> w;
    d[u][v] = w;
  }

  rep(i, n) d[i][i] = 0;

  rep(k, n) rep(i, n) rep(j, n) {
    if(d[i][k] != INF && d[k][j] != INF)
      chmin(d[i][j], d[i][k] + d[k][j]);
  }

  rep(i, n) {
    if (d[i][i] < 0) {
      puts("NEGATIVE CYCLE");
      return 0;
    }
  }

  rep(i, n) rep(j, n) {
    if (d[i][j] == INF)
      cout << "INF";
    else
      cout << d[i][j];

    if (j == n - 1)
      cout << endl;
    else
      cout << " ";
  }

  return 0;
}

