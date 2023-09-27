#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define REP(i,m,n) for(int i=(int)(m); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define RREP(i,m,n) for(int i=(int)(m); i>=(int)(n); i--)
#define rrep(i,n) RREP(i,n-1,0)
#define all(v) v.begin(), v.end()
#define endk '\n'
const int inf = 1e9+7;
const ll longinf = 1LL<<60;
const ll mod = 1e9+7;
const ld eps = 1e-10;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, m; cin >> n >> m;
  vector<vector<int>> G(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  vector<int> ans(n);
  auto bfs = [&]() {
    queue<int> q;
    vector<bool> vis(n);
    vector<int> d(n, inf);
    q.push(0);
    d[0] = 0;
    while(!q.empty()) {
      int cur = q.front(); q.pop();
      if(vis[cur]) continue;
      vis[cur] = true;
      for(int ne: G[cur]) {
        if(vis[ne]) continue;
        if(d[ne] > d[cur]+1) {
          d[ne] = d[cur]+1;
          ans[ne] = cur;
          q.push(ne);
        }
      }
    }
  };
  bfs();
  cout << "Yes\n";
  rep(i, n) if(i) cout << ans[i]+1 << endk;
  return 0;
}
