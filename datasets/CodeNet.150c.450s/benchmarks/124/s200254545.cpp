#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
int ctoi(char c) {
  if (c >= '0' && c <= '9') {
    return c - '0';
  }
  return 0;
}
ll factorial(ll n) {
  if (n == 1) {
    return 1;
  }
  ll ans = factorial(n-1);
  return ans*n;
}
ll gcd(ll a, ll b) {
  if (a < b) {
    ll tmp = a;
    a = b;
    b = tmp;
  }
  ll r = a%b;
  while(r != 0) {
    a = b;
    b = r;
    r = a%b;
  }
  return b;
}
ll lcm(ll a, ll b) {
  return (a/gcd(a, b))*b;
}
bool prime(ll n) {
  if (n == 1) {
    return false;
  } else {
    for (ll i = 2; i <= (ll)pow(n, 0.5); i++) {
      if (n%i == 0) return false;
    }
  }
  return true;
}
ll RepeatSquaring(ll n, ll p, ll m) {
  if (p == 0) return 1;
  if (p%2 == 0) {
    ll t = RepeatSquaring(n, p/2, m);
    return (t*t)%m;
  }
  return (n*RepeatSquaring(n, p-1, m))%m;
}

vector <ll> color(100, 0);
vector <vector <ll>> m(100, vector <ll> (100, -1));
vector <ll> d(100, INF);
vector <ll> p(100, -1);

void dijkstra(ll n) {
  d.at(0) = 0;
  p.at(0) = -1;
  while (true) {
    ll mincost = INF;
    ll u;
    rep(i, n) {
      if (color.at(i) != 2 && d.at(i) < mincost) {
        mincost = d.at(i);
        u = i;
      }
    }
    if (mincost == INF) break;
    color.at(u) = 2;
    rep(i, n) {
      if (color.at(i) != 2 && m.at(u).at(i) != -1) {
        if (d.at(u)+m.at(u).at(i) < d.at(i)) {
          d.at(i) = d.at(u) + m.at(u).at(i);
          p.at(i) = u;
          color.at(i) = 1;
        }
      }
    }
  }
  return;
}

int main() {
  ll n;
  cin >> n;
  rep(i, n) {
    ll u, k;
    cin >> u >> k;
    rep(j, k) {
      ll v, c;
      cin >> v >> c;
      m.at(i).at(v) = c;
    }
  }
  dijkstra(n);
  rep(i, n) {
    cout << i << ' ' << d.at(i) << endl;
  }
}
