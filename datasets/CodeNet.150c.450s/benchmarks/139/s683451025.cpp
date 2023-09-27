#include <iostream>
#include <vector>
#include <queue>

struct graph {
  int n, *p;
  std::vector<int> *adj;
  graph (int n) : n(n) {
    adj = new std::vector<int>[n];
    p = new int[n];
    for (int i = 0; i < n; ++i)
      p[i] = -1;
  }
  void add_edge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  void bfs(int s) {
    std::queue<int> q;
    q.push(s); p[s] = s;
    while (!q.empty()) {
      int u = q.front();
      q.pop();
      for (int v : adj[u])
        if (p[v] == -1) {
          p[v] = u;
          q.push(v);
        }
    }
  }
};

int N, M;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::cin >> N >> M;
  graph g(N);
  for (int i = 0; i < M; ++i) {
    int u, v; std::cin >> u >> v;
    u--;  v--;
    g.add_edge(u, v);
  }
  g.bfs(0);

  bool all_has_parent = true;
  for (int u = 0; u < N; ++u)
    if (g.p[u] == -1)
      all_has_parent = false;
  if (all_has_parent) {
    std::cout << "Yes\n";
    for (int u = 1; u < N; ++u)
      std::cout << g.p[u] + 1 << "\n";
  } else {
    std::cout << "No\n";
  }

  return 0;
}
