#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O0")
typedef long long int ll;
typedef long double ld;
const ll mod = 1e9+7;
const ll INF = 1e18;
#define rep(i,n) for (ll i = 0; i < (n); ++i)
#define Rep(i,a,n) for (ll i = (a); i < (n); ++i)
#define All(a) (a).begin(),(a).end()
#define Pi acos(-1)
using Graph = vector<vector<ll>>;
using V = vector<ll>;
using P = pair<ll,ll>;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  cout << setprecision(15) << fixed;
  chrono::system_clock::time_point start,end;
  start = chrono::system_clock::now();

  ll n, m;
  cin >> n >> m;
  Graph G(n);
  rep(i,m) {
    ll a, b;
    cin >> a >> b;
    --a, --b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  V d(n,-1);
  queue<ll> q;
  d[0] = 0;
  q.push(0);

  while (!q.empty()) {
    ll v = q.front();
    q.pop();
    for (ll nv : G[v]) {
      if (d[nv] != -1) continue;
      d[nv] = v+1;
      q.push(nv);
    }
  }

  bool bo = true;
  rep(i,n) {
    if (d[i] == -1) bo = false;
  }

  if (bo) {
    cout << "Yes\n";
    rep(i,n-1) cout << d[i+1] << '\n';
  }
  else cout << "No\n";

  end = chrono::system_clock::now();
  auto elapsed = chrono::duration_cast< chrono::milliseconds >(end - start).count();
  cerr << elapsed << "ms" << '\n';
}