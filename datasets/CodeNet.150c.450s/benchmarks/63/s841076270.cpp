#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <stack>
#include <limits>
#include <array>
#include <unordered_map>
#include <unordered_set>
#include <memory>
#include <numeric>
//#include <tuple>

constexpr long long mod = static_cast<long long>(1e9 + 7);

struct Edge {
    int to;
    int w;
};

using Edges = std::vector<std::vector<Edge>>;

int main() {
    int V, E, r;
    std::cin >> V >> E >> r;
    Edges edges(V, std::vector<Edge>());
    while(E--) {
        int s, t, w;
        std::cin >> s >> t >> w;
        edges[s].push_back(Edge{t, w});
    }

    std::vector<int> dist(V, std::numeric_limits<int>::max());
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pque;
    pque.push(std::make_pair(0, r));
    while(!pque.empty()) {
        auto now = pque.top();
        pque.pop();
        int v = now.second;
        int w = now.first;
        dist[v] = std::min(dist[v], w);
        for(auto val: edges[v]) {
            if(dist[val.to] == std::numeric_limits<int>::max()) {
                pque.push(std::make_pair(w + val.w, val.to));
            }
        }
    }

    for(auto val: dist) {
        if(val == std::numeric_limits<int>::max()) std::cout << "INF\n";
        else std::cout << val << '\n';
    }

    std::cout << std::flush;

    return 0;
}

