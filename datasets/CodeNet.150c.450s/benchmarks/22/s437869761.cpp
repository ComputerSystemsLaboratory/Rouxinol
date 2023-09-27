#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back

typedef long long LL;
typedef long double LD;

const LL INF = (1LL << 60);

typedef pair<LL,int> PLL;
bool bellman_ford(int n, vector<PLL> adjList[], int source, vector<LL>& dist);

int main() {

  ios_base::sync_with_stdio(0); cin.tie(0);

  vector<PLL> adjList[1005];

  int n, m, r;
  cin >> n >> m >> r;

  for (int i = 0; i < m; i++) {
    int s, t; LL d;
    cin >> s >> t >> d;

    adjList[s].push_back({d, t});
  }

  vector<LL> dist;
  bool has_negative_cycle = bellman_ford(n, adjList, r, dist);

  if (has_negative_cycle) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    for (int i = 0; i < n; i++) {
      if (dist[i] == INF)
        cout << "INF" << endl;
      else
        cout << dist[i] << endl;
    }
  }

  return 0;
}

/*
 * @param n: number of nodes from 0 to n-1
 * @param adjList: adjacency list representation of the graph
 * @param source: source for shortest path
 * 
 * @return dist[i]: shortest distance from source to node i, INF if unreachable
 * 
 * tested on: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B
 */
bool bellman_ford(int n, vector<PLL> adjList[], int source, vector<LL>& dist) {
  dist.assign(n, INF); dist[source] = 0;
  for (int i = 0; i < n - 1; i++) 
    for (int u = 0; u < n; u++) 
      if (dist[u] != INF) 
        for (PLL v : adjList[u]) 
          dist[v.se] = min(dist[v.se], dist[u] + v.fi);

  bool has_negative_cycle = false;
  for (int u = 0; u < n; u++) 
    for (PLL v : adjList[u]) 
      if (dist[u] != INF && dist[v.se] > dist[u] + v.fi) 
        has_negative_cycle = true;

  return has_negative_cycle;
}
