#include <algorithm>
#include <iostream>
#include <numeric>
#include <queue>
#include <vector>

using Edge = std::pair<uint32_t, uint32_t>;
using Graph = std::vector<std::vector<Edge>>;

int main() {
  uint32_t n = 0;
  std::cin >> n;
  Graph G(n);
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      int32_t cost = 0;
      std::cin >> cost;
      if (cost != -1) G[i].push_back({j, cost});
    }
  }

  std::vector<uint32_t> min_cost(n, -1);
  min_cost[0] = 0;
  std::vector<bool> seen(n, false);
  while (!std::all_of(seen.begin(), seen.end(), [](bool v) { return v; })) {
    uint32_t current = -1, cost = -1;
    for (size_t i = 0; i < n; i++) {
      if (!seen[i] && (cost > min_cost[i])) {
        current = i;
        cost = min_cost[i];
      }
    }

    seen[current] = true;
    for (auto &&node : G[current]) {
      if (seen[node.first]) continue;
      min_cost[node.first] = std::min(node.second, min_cost[node.first]);
    }
  }

  std::cout << std::accumulate(min_cost.begin(), min_cost.end(), 0)
            << std::endl;

  return 0;
}
