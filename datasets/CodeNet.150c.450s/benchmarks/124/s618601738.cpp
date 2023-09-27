#include <iostream>
#include <vector>

using WNode = std::pair<uint32_t, uint32_t>;
using WGraph = std::vector<std::vector<WNode>>;

int main() {
  uint32_t N = 0;
  std::cin >> N;
  WGraph G(N);
  for (size_t i = 0; i < N; i++) {
    uint32_t K = 0;
    std::cin >> i >> K;
    for (size_t j = 0; j < K; j++) {
      uint32_t node = 0, cost = 0;
      std::cin >> node >> cost;
      G[i].push_back({node, cost});
    }
  }

  const uint32_t start = 0;
  std::vector<uint32_t> min_cost(N, -1);
  min_cost[start] = 0;
  std::vector<uint32_t> prev_node(N, -1);
  prev_node[start] = start;
  std::vector<bool> visit(N, false);
  for (size_t i = 0; i < N; i++) {
    uint32_t current = 0, min = -1;
    for (size_t j = 0; j < N; j++) {
      if (visit[j] || min_cost[j] >= min) continue;
      min = min_cost[j];
      current = j;
    }
    visit[current] = true;

    for (auto &&g : G[current]) {
      if (min_cost[g.first] <= g.second + min_cost[current]) continue;
      min_cost[g.first] = g.second + min_cost[current];
      prev_node[g.first] = current;
    }
  }

  for (size_t i = 0; i < N; i++) {
    std::cout << i << " " << min_cost[i] << std::endl;
  }

  return 0;
}
