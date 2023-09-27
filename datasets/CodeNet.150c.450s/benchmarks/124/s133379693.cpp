#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, n) for (int i = (int)(n); i >= 0; i--)
#define REP(i, m, n) for (int i = (int)(m); i <= (int)(n); i++)
#define REPR(i, m, n) for (int i = (int)(m); i >= (int)(n); i--)
#define all(v) v.begin(), v.end()
typedef long long ll;
const int INF = 1001001001;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using Graph = vector<vector<int> >;

int n;
vector<bool> seen;
vector<int> dist;
priority_queue<pair<int, int> > pq;

void dijkstra(const Graph &G, int v){
  seen[v] = true;

  rep(u, n){
    if(G[v][u] == -1) continue;
    if(seen[u] == true) continue;
    if(chmin(dist[u], dist[v]+G[v][u])) pq.push(make_pair((-1)*dist[u], u));
  }

  while(!pq.empty()){
    pair<int, int> tmp;
    tmp = pq.top();
    pq.pop();
    if(seen[tmp.second]) continue;
    int nv = tmp.second;
    dijkstra(G, nv);
  }

  return;
}

int main(){
  cin >> n;

  Graph G(n, vector<int>(n, -1));
  rep(i, n){
    int v, k; cin >> v >> k;
    rep(j, k){
      int u, c; cin >> u >> c;
      G[v][u] = c;
    }
  }

  seen.assign(n, false);
  dist.assign(n, INF);
  dist[0] = 0;
  dijkstra(G, 0);

  rep(i, n) cout << i << " " << dist[i] << endl;

  return 0;
}


