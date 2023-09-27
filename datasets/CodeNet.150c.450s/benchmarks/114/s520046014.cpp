#include <iostream>
#include <queue>
#include <vector>

struct Edge {
  int dst;
  long long cost;
  Edge() {}
  Edge(int x, long long y) : dst(x), cost(y) {}
};

int prim(std::vector<std::vector<Edge>> &G) {
  const int V = (int)G.size();
  std::vector<bool> is_used(V, false);

  typedef std::pair<long long, int> PLI;
  std::priority_queue<PLI, std::vector<PLI>, std::greater<PLI>> que;
  que.push(std::make_pair(0LL, 0));

  int ret = 0;
  while (!que.empty()) {
    long long cost = que.top().first;
    int cur_v = que.top().second;
    que.pop();
    if (is_used[cur_v]) {
      continue;
    }
    is_used[cur_v] = true;
    ret += cost;
    for (int i = 0; i < (int)G[cur_v].size(); i++) {
      que.push(std::make_pair(G[cur_v][i].cost, G[cur_v][i].dst));
    }
  }
  return ret;
}

int main() {
  int n;
  std::cin >> n;

  std::vector<std::vector<Edge>> g(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int a;
      std::cin >> a;
      if (a != -1) {
        g[i].push_back(Edge(j, a));
        g[j].push_back(Edge(i, a));
      }
    }
  }
  std::cout << prim(g) << std::endl;

  return 0;
}
