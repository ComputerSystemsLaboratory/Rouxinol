#include <bits/stdc++.h>

template<typename cost_type = int>
std::vector<cost_type> dijkstra(
  const std::vector<std::vector<std::pair<int, cost_type>>> &G,
  const int st,
  const cost_type inf = std::numeric_limits<cost_type>::max() / 3) {
  
  const int SZ = G.size();
  std::vector<cost_type> dist(SZ, inf);
  dist[st] = 0;

  std::priority_queue<
    std::pair<cost_type, int>,
    std::vector<std::pair<cost_type, int>>,
    std::greater<std::pair<cost_type, int>>> pq;
  pq.emplace(0, st);
  while (!pq.empty()) {
    const auto cur_cost = std::get<0>(pq.top());
    const auto cur = std::get<1>(pq.top());
    pq.pop();
    if (dist[cur] < cur_cost) {
      continue;
    }
    for (auto &&nxt : G[cur]) {
      const auto nxt_p = std::get<0>(nxt);
      const auto nxt_cost = cur_cost + std::get<1>(nxt);
      if (dist[nxt_p] <= nxt_cost) {
        continue;
      }
      dist[nxt_p] = nxt_cost;
      pq.emplace(nxt_cost, nxt_p);
    }
  }

  return dist;
}

using namespace std;

int main() {
  int V, E, R;
  cin >> V >> E >> R;
  vector<vector<pair<int, long long>>> G(V);
  for (int i = 0; i < E; i++) {
    int s, t;
    long long d;
    cin >> s >> t >> d;
    G[s].emplace_back(t, d);
  }

  const auto inf = (long long)1e18;
  const auto dist = dijkstra(G, R, inf);
  for (int i = 0; i < V; i++) {
    if (dist[i] >= inf) cout << "INF" << '\n';
    else cout << dist[i] << '\n';
  }
}

