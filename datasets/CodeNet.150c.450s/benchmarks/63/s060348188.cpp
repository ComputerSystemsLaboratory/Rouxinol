#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back

typedef long long LL;
typedef long double LD;

const LL INF = (1LL << 60);

typedef pair<LL,int> PLL;
void dijkstra(int n, vector<PLL> adjList[], int source, vector<LL>& dist);

int main() {

  ios_base::sync_with_stdio(0); cin.tie(0);

  vector<PLL> adjList[100005];

  int n, m, r;
  cin >> n >> m >> r;

  for (int i = 0; i < m; i++) {
    int s, t; LL d;
    cin >> s >> t >> d;

    adjList[s].pb({d, t});
  }

  vector<LL> dist;

  dijkstra(n, adjList, r, dist);

  for (int i = 0; i < n; i++) {
    if (dist[i] == INF)
      cout << "INF" << endl;
    else
      cout << dist[i] << endl;
  }

  return 0;
}

/*
 * @param n: number of nodes
 * @param adjList: adjacency list representation of the graph
 * @param source: source for shortest path
 *
 * @return dist[i]: shortest distance from source to node i, INF if unreachable
 */
void dijkstra(int n, vector<PLL> adjList[], int source, vector<LL>& dist) {
  dist.assign(n, INF); dist[source] = 0;
  priority_queue<PLL,vector<PLL>,greater<PLL>> pq; pq.push({0LL, source});
  while (!pq.empty()) {
    LL cost; int u;
    tie(cost, u) = pq.top(); pq.pop();

    if (cost > dist[u]) continue;

    for (PLL neighbor : adjList[u]) {
      LL w; int v;
      tie(w, v) = neighbor;
      if (dist[v] > dist[u] + w) {
        dist[v] = dist[u] + w;
        pq.push({dist[v], v});
      }
    }
  }
}
