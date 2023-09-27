#include <iostream>

using namespace std;
const int INF = (1 << 30);

struct Edge {
  int from, to, cost;
};

int main() {
  int V, E, r;
  cin >> V >> E >> r;
  Edge edges[E];
  for (int i = 0; i < E; ++i) {
    int s, t, c;
    cin >> s >> t >> c;
    edges[i] = Edge({s, t, c});
  }
  int d[V];
  fill(d, d + V, INF);
  d[r] = 0;
  for (int i = 0; i < V; ++i) {
    for (int j = 0; j < E; ++j) {
      Edge e = edges[j];
      if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
        if (i == V - 1) {
          cout << "NEGATIVE CYCLE" << endl;
          return 0;
        }
        d[e.to] = d[e.from] + e.cost;
      }
    }
  }
  for (int i = 0; i < V; ++i) {
    if (d[i] == INF) {
      cout << "INF" << endl;
    } else {
      cout << d[i] << endl;
    }
  }

  return 0;
}
