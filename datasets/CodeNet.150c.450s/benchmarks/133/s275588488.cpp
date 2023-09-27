#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD (long long)(1e9+7)
#define INF (1LL<<60)
#define rep(i,n) for(ll i = 0; i < (n); i++)
#define rep1(i,n) for(ll i = 1; i <= (n); i++)

template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}


// 最大公約数
ll gcd(ll a, ll b)
{
  if(b == 0) return a;
  return gcd(b, a % b);
}

// mod m におけるa の逆元
ll modinv(ll a, ll m) {
  ll b = m, u = 1, v = 0;
  while (b) {
    ll t = a / b;
    a -= t * b; swap(a, b);
    u -= t * v; swap(u, v);
  }
  u %= m;
  if (u < 0) u += m;
  return u;
}

// 素因数分解
vector<pair<ll, ll>> prim;
void pf(ll n)
{
  ll s = sqrt(n);
  ll r = 0;
  for(ll i = 2; i <= s; i++) {
    if((n % i) == 0) {
      r = 0;
      do {
	r++;
	n = n / i;
      } while((n % i) == 0);
      prim.push_back({i, r});
    }
  }
  if(n > s) {
    prim.push_back({n, 1});
  }
}

#define CMAX 26

void solve()
{
  ll D; cin >> D;
  vector<ll> c(CMAX + 1); rep1(i, CMAX) cin >> c[i];
  vector<vector<ll>> s(D + 1, vector<ll>(CMAX + 1));
  rep1(i, D) rep1(j, CMAX) cin >> s[i][j];

  vector<ll> t(D + 1); rep1(i, D) {cin >> t[i];}
  vector<vector<ll>> last(D + 1, vector<ll>(CMAX + 1, 0));
  ll sat = 0;
  ll dis;
  for(ll day = 1; day <= D; day++) {
    rep1(i, CMAX) last[day][i] = last[day - 1][i];
    ll con = t[day];
    sat += s[day][con];
    last[day][con] = day;
    dis = 0;
    rep1(i, CMAX) {
      dis += c[i] * (day - last[day][i]);
    }
    
    sat -= dis;

    cout << sat << endl;
  }

  rep1(day, D) {
    cerr << day << "] ";
    rep1(i, CMAX) {
      cerr << last[day][i] << " ";
    }
    cerr << endl;
  }
}


int main(void)
{
  // ll t; cin >> t; rep(i, t)
  solve();
}
