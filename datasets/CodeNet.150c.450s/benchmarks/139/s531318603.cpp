#include <iostream>
#include <vector>
#include <set>
#define eb emplace_back
#define mp make_pair
using namespace std;

const int inf = 1000000007;
vector < int > g[100010];
int dist[100010],outgoing[100010];
void dijk(int s) {
  multiset < pair< int,int> > q;
  dist[s] = 0;
  q.insert(mp(dist[s],s));
  while (!q.empty()) {
    pair <int,int> p = *q.begin();
    int d = p.first;
    int u = p.second;
    q.erase(q.begin());
    for (auto v: g[u]) {
      if ( d + 1 < dist[v]) {
        dist[v] = d + 1;
        outgoing[v] = u;
        q.insert(mp(dist[v],v));
      }
    }
  }
}
int main() {
  int n,m; cin >> n >> m;
  for (int i=0; i<m; i++) {
    int u,v; cin >> u >> v;
    g[u].eb(v);
    g[v].eb(u);
  }
  for (int i=1; i<=n; i++) dist[i] = inf;
  dijk(1);
  // for (int i=1; i<=n; i++) cout << dist[i] << " "; cout << endl;
  for (int i=1; i<=n; i++) {
    if (dist[i] == inf) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  for (int i=2; i<=n; i++) {
    cout << outgoing[i] << endl;
  }
}
  