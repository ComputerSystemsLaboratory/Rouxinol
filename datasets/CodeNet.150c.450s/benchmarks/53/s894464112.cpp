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

map<ll, ll> prime_factor(ll n) {
  map<ll, ll> ret;
  for (ll i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if (n != 1) ret[n] = 1;
  return ret;
}

int main() {
  ll n;
  cin >> n;

  map<ll, ll> mp = prime_factor(n);

  cout << n << ": ";
  ll mcnt = 0;
  for (auto kv : mp) {
    mcnt++;
    ll p, cnt;
    tie(p, cnt) = kv;
    rep(i, cnt) { 
      cout << p;
      if(i == cnt - 1 && mcnt == (ll)mp.size()){
        cout << endl;
      } else {
        cout << " ";
      }
    }
  }

  return 0;
}

