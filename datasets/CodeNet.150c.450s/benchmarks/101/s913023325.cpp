#include <iostream>
#include <vector>

using Graph = std::vector<std::vector<uint32_t>>;

void dfs(const Graph& G, uint32_t start, std::vector<uint32_t>& group,
         uint32_t mark) {
  group[start] = mark;
  for (auto&& g : G[start]) {
    if (group[g] == mark) continue;
    dfs(G, g, group, mark);
  }
  return;
}

int main() {
  uint32_t n = 0, m = 0;
  std::cin >> n >> m;
  Graph G(n);
  for (size_t i = 0; i < m; i++) {
    uint32_t s = 0, t = 0;
    std::cin >> s >> t;
    G[s].push_back(t);
    G[t].push_back(s);
  }

  std::vector<uint32_t> group(n, 0);
  uint32_t g = 0;
  for (size_t i = 0; i < n; i++) {
    if (group[i] == 0) {
      g++;
      dfs(G, i, group, g);
    }
  }

  uint32_t q = 0;
  std::cin >> q;
  for (size_t i = 0; i < q; i++) {
    uint32_t s = 0, t = 0;
    std::cin >> s >> t;
    std::cout << (group[s] == group[t] ? "yes" : "no") << std::endl;
  }

  return 0;
}
