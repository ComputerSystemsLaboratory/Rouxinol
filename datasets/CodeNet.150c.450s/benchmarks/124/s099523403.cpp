#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

/*
 * dijkstra 法 O(Elog(V))
 * グラフ g において, 始点 start から各頂点への最短経路を返す
*/
struct Edge {
public:
  int to, cost;

  Edge() {}
  Edge(int to, int cost) : to(to), cost(cost) {}
};

std::vector<int> dijkstra(std::vector<std::vector<Edge> >& graph, int start) {
  std::vector<int> d(graph.size(), int(1e9));
  // (x, y) ... x : the minimum distance from start to y, y : now vertex 
  std::priority_queue<std::pair<int, int> > que;

  que.push({0, start});
  d[start] = 0;

  while(!que.empty()) {
    auto p = que.top();
    que.pop();

    for (auto e : graph[p.second]) {
      if (d[e.to] <= p.first + e.cost) continue;

      d[e.to] = p.first + e.cost;
      que.push({d[e.to], e.to});
    }
  }

  return d;
}


int main() {
  int n, u, k, v, c;
  std::vector<std::vector<Edge> > g;

  cin >> n;
  g.resize(n);
  for (int i = 0; i < n; ++i) {
    cin >> u >> k;
    for (int j = 0; j < k; ++j) {
      cin >> v >> c;
      g[u].push_back({v, c});
    }
  }

  auto d = dijkstra(g, 0);

  for (int i = 0; i < n; ++i) {
    cout << i << " " << d[i] << endl;
  }

  return 0;
}

