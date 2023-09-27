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
vector <vector <ll>> m(100, vector <ll> (100, INF));
vector <ll> d(100, INF);
vector <ll> p(100, -1);

ll prim(ll n) {
  d.at(0) = 0;
  while (true) {
    ll mincost = INF;
    ll u;
    rep(i, n) {
      if (color.at(i) != 2 && d.at(i) < mincost) {
        mincost = d.at(i);
        u = i;
      }
    }
    if (mincost == INF) {
      break;
    }
    color.at(u) = 2;
    rep(i, n) {
      if (color.at(i) != 2 && m.at(u).at(i) != INF) {
        if (m.at(u).at(i) < d.at(i)) {
          d.at(i) = m.at(u).at(i);
          p.at(i) = u;
          color.at(i) = 1;
        }
      }
    }
  }
  ll sum = 0;
  rep(i, n) {
    if (p.at(i) != -1) sum += m.at(p.at(i)).at(i);
  }
  return sum;
}

int main() {
  ll n;
  cin >> n;
  rep(i, n) {
    rep(j, n) {
      ll a;
      cin >> a;
      if (a != -1) {
        m.at(i).at(j) = a;
      }
    }
  }
  cout << prim(n) << endl;
}
