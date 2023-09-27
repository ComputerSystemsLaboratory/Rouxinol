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

const ll mod = 1e9 + 7;

int main() {
  ll n;
  cin >> n;
  vvll dp(n, vll(n, INF));

  vll p(n + 1);
  rep(i, n) {
    cin >> p[i] >> p[i + 1];
    dp[i][i] = 0;
  }

  for (ll h = 1; h <= n - 1; h++) {
    for (ll i = 0; i <= n - 1 - h; i++) {
      ll j = i + h;
      for (ll k = i; k <= j - 1; k++) {
        chmin(dp[i][j], dp[i][k] + dp[k+1][j] + p[i] * p[k + 1] * p[j + 1]);
      }  // k
    }    // i
  }      // h

  cout << dp[0][n - 1] << endl;

  return 0;
}

