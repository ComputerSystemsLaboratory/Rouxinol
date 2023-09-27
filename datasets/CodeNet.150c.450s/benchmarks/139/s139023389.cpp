#include <bits/stdc++.h>
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

template<class T, class U> bool chmax(T &a, U b) { if (a < b) { a = b; return true; } return false; }
template<class T, class U> bool chmin(T &a, U b) { if (a > b) { a = b; return true; } return false; }

using ll = long long;
using ld = long double;
using namespace std;

constexpr ll MOD = 1000000007;

signed main()
{
  cout << fixed << setprecision(20);
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m; cin >> n >> m;
  vector<vi> edge(n);

  rep(i, m) {
    int a, b; cin >> a >> b;
    edge[a-1].eb(b-1);
    edge[b-1].eb(a-1);
  }

  vi used(n,0);
  queue<int> que;
  que.em(0);
  used[0] = 1;

  while (!que.empty()) {
    int v = que.front(); que.pop();

    for (auto to : edge[v]) {
      if (used[to]) continue;
      que.em(to);
      used[to] = v+1;
    }
  }

  cout << "Yes" << endl;
  rep2(i, 1, n-1) cout << used[i] << endl;

  return (0);
}
