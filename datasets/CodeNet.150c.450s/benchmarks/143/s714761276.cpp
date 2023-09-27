#include <bits/stdc++.h>
#define int long long
#pragma GCC optimize("O3")

#define fi first
#define se second
#define em emplace
#define eb emplace_back
#define mp make_pair
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define endl '\n'

#define si(v) int((v).size())
#define all(v) (v).begin(), (v).end()
#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i) 
#define rep2(i, n, m) for (ll i = n; i <= (ll)(m); ++i)
#define rep3(i, n, m) for (ll i = n; i >= (ll)(m); --i)

template<class T, class U> bool chmax(T &a, U b) { if (a < b) a = b; return true; }
template<class T, class U> bool chmin(T &a, U b) { if (a > b) a = b; return true; }

using ll = long long;
using ld = long double;
using namespace std;

constexpr ll MOD = 1000000007;

signed main()
{
  cout << fixed << setprecision(20);
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n; cin >> n;
  map<int,int> m;
  int sum = 0;

  rep(i, n) {
    int a; cin >> a;
    sum += a;
    ++m[a];
  }

  int q; cin >> q;
  rep(i, q) {
    int b, c; cin >> b >> c;
    int s = b * m[b];
    sum -= s;
    sum += c * m[b];
    m[c] += m[b];
    m[b] = 0;

    cout << sum << endl;
  }

  return (0);
}
