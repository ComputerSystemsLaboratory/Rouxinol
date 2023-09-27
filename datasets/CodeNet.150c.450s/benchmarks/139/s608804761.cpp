#include <bits/stdc++.h>
#define IOS                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0)
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;
using vi = vector<int>;
using pii = pair<ll, ll>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;
ll bpow(ll b, ll p, ll m = 1000000007LL) {
  ll rt = 1;
  for (; p; p >>= 1, b = b * b % m)
    if (p & 1)
      rt = rt * b % m;
  return rt;
}
vector<int> g[100005];
int d[100005];
int bt[100005];
int main() {
  IOS;
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    g[u].pb(v), g[v].pb(u);
  }
  for (int i = 1; i <= n; i++)
    d[i] = INF;
  queue<int> q;
  q.push(1);
  d[1] = 0;
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (int v : g[u]) {
      if (d[v] > d[u] + 1) {
        bt[v] = u, d[v] = d[u] + 1;
        q.push(v);
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    if (d[i] == INF) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  for (int i = 2; i <= n; i++) {
    cout << bt[i] << endl;
  }
}
