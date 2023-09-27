#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <queue>
#include <utility>
#include <vector>

int main() {
    using VertexId = std::uint32_t;
    using EdgeId = std::uint64_t;
    using EdgeWeight = std::uint64_t;
    using AdjData = std::pair<VertexId, EdgeWeight>;
    using AdjList = std::vector<AdjData>;
    using Edge = std::pair<std::pair<VertexId, VertexId>, EdgeWeight>;
    auto edge_list = std::vector<Edge>();

    auto n = VertexId(0);
    auto m = EdgeId(0);
    std::cin >> n >> m;

    auto adjacency_list = std::vector<AdjList>(n, AdjList());
    for (auto i_ = 0; i_ < m; ++i_) {
        auto source = VertexId(0);
        auto target = VertexId(0);
        auto weight = EdgeWeight(0);
        std::cin >> source >> target >> weight;

        adjacency_list[source].emplace_back(target, weight);
        adjacency_list[target].emplace_back(source, weight);
        edge_list.emplace_back(std::make_pair(source, target), weight);
    }

    std::sort(edge_list.begin(), edge_list.end(), [](const auto& a, const auto& b) { return a.second < b.second; });

    auto forrest_map = std::vector<std::pair<VertexId, VertexId>>();
    for (auto i = 0; i < n; ++i) forrest_map.emplace_back(i, 0);

    std::function<VertexId(VertexId)> find = [&find, &forrest_map](const VertexId& v) {
        if (v == forrest_map[v].first) return v;

        const auto parent = forrest_map[v].first;
        const auto parent_root = find(parent);
        forrest_map[v].first = parent_root;

        return parent_root;
    };

    auto weight_sum = 0;
    for (const auto& e : edge_list) {
        const auto source = e.first.first;
        const auto target = e.first.second;
        const auto weight = e.second;

        const auto source_root = find(source);
        const auto target_root = find(target);

        const auto source_rank = forrest_map[source_root].second;
        const auto target_rank = forrest_map[target_root].second;
        if (source_rank > target_rank) {
            forrest_map[target_root] = std::make_pair(source_root, source_rank);
            weight_sum += weight;
        } else if (source_rank < target_rank) {
            forrest_map[source_root] = std::make_pair(target_root, target_rank);
            weight_sum += weight;
        } else if (source_root != target_root) {
            forrest_map[target_root] = std::make_pair(source_root, source_rank);
            forrest_map[source_root].second++;
            weight_sum += weight;
        }
    }

    std::cout << weight_sum << std::endl;

    return 0;
}
