#include <bits/stdc++.h>
using namespace std;

// ----------- define --------------
#define int long long
#define vi vector<int>
#define vc vector<char>
#define ii pair<int,int>
#define fi first
#define sc second
#define stoi stoll
#define all(x) (x).begin(),(x).end()
#define get_bit(x, k) ((x >> k) & 1)
// ---------------------------------

const int N = 100005;

vector<int> adj[N];
int vis[N], cnt = 0;

void MAIN() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  queue<ii> q; q.push(ii(1, 1));
  while (q.size()) {
    ii i = q.front(); q.pop();
    if (vis[i.fi]) continue;
    vis[i.fi] = i.sc; cnt++;
    for (auto &j : adj[i.fi]) q.push(ii(j, i.fi));
  }
  if (cnt == n) {
    cout << "Yes" << '\n';
    for (int i = 2; i <= n; i++) {
      cout << vis[i] << '\n';
    }
  }
  else cout << "No" << '\n';
}

signed main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int T = 1;
  // cin >> T;
  while (T--) MAIN();
}
