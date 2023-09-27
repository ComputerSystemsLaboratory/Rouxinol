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

struct edge {
  ll u, v, cost;
};

bool comp(const edge& e1, const edge& e2) {
  return e1.cost < e2.cost;
}

const ll MAX = 100000;
vector <edge> es(MAX);
vector <ll> par(MAX);
vector <ll> d(MAX, 0);
ll V, E;

void init(ll n) {
  rep(i, n) {
    par.at(i) = i;
  }
  return;
}
ll find(ll n) {
  if (n == par.at(n)) {
    return n;
  } else {
    return par.at(n) = find(par.at(n));
  }
}
void unite(ll n, ll m) {
  n = find(n);
  m = find(m);
  if (n == m) return;
  if (d.at(n) < d.at(m)) {
    par.at(n) = m;
  } else {
    par.at(m) = n;
    if (d.at(n) == d.at(m)) d.at(n)++;
  }
  return;
}
bool same(ll n, ll m) {
  return find(n) == find(m);
}

ll kruskal(ll V, ll E) {
  sort(es.begin(), es.begin()+E, comp);
  init(V);
  ll res = 0;
  rep(i, E) {
    edge e = es.at(i);
    if (!same(e.u, e.v)) {
      unite(e.u, e.v);
      res += e.cost;
    }
  }
  return res;
}

int main() {
  cin >> V >> E;
  rep(i, E) {
    cin >> es.at(i).u >> es.at(i).v >> es.at(i).cost;
  }
  cout << kruskal(V, E) << endl;
}
