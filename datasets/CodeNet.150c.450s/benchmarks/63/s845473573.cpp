#include <algorithm>
#include <cstdint>
#include <iostream>
#include <queue>
#include <string>
#include <sstream>
#include <vector>
 
typedef std::uint_least64_t cost_t;
#define COST_INF UINT_LEAST64_MAX
 
struct Edge {
    int target;
    int distance;
};
 
struct Node {
    std::vector<Edge> edges;
    cost_t cost;
 
    Node() : cost(COST_INF) {}
};
 
int main()
{
    int v, e, r;
    std::cin >> v >> e >> r;
 
    std::vector<Node> nodes(v);
    nodes[r].cost = 0;
 
    for (int i = 0; i < e; i++) {
        int s, t, d;
        std::cin >> s >> t >> d;
        nodes[s].edges.push_back({ t, d });
    }
 
    auto greater_node = [&](int x, int y) { return nodes[x].cost > nodes[y].cost; };
    std::priority_queue<int, std::vector<int>, decltype(greater_node)> queue(greater_node);
    queue.push(r);
 
    while (!queue.empty()) {
        Node& node = nodes[queue.top()];
        queue.pop();
 
        for (Edge e : node.edges) {
            Node& target = nodes[e.target];
            cost_t new_cost = node.cost + e.distance;
            if (new_cost < target.cost) {
                target.cost = new_cost;
                queue.push(e.target);
            }
        }
    }
 
    for (Node& node : nodes) {
        if (node.cost == COST_INF)
            std::cout << "INF";
        else
            std::cout << node.cost;
        std::cout << std::endl;
    }
 
    return 0;
}