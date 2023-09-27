#include <bits/stdc++.h>
const long long INF = LLONG_MAX / 2;
const long long MOD = 1000000007;
const long double PI = 3.1415926;
#define FOR(i, r, n) for(int i=(ll)(r); i<(ll)(n); i++) 
#define REP(i, n) FOR(i, (0), n)
#define ll long long int
using namespace std;
ll ans = 0, sum = 0, n, k, counter = 0, w, h;
string s;
vector<ll> v;
vector<pair<ll, ll>> vp;
vector<vector<ll>> vv(50, vector<ll>(50, INF));

ll parent(ll num) {
  if (v[num] == num) return num;
  else {
    ll res = parent(v[num]);
    v[num] = res;
    return res;
  }
}

int main() {
  cin >> n >> k;
  v.resize(n);
  REP(i, n) {
    v[i] = i;
  }
  REP(i, k) {
    ll a, b, c;
    cin >> a >> b >> c;
    if (a) {
      if (parent(b) == parent(c)) cout << "1" << endl;
      else cout << "0" << endl;
    }
    else {
      v[parent(c)] = parent(b);
    }
  }
}