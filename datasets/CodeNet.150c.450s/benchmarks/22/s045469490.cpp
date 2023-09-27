#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <stack>
#include <array>
#include <limits>
//#include <tuple>

using namespace std;

//constexpr long long mod = static_cast<long long>(1e9 + 7);


int main() {
    int V, E, r;
    std::cin >> V >> E >> r;

    std::vector<std::vector<std::pair<int, int>>> edges(V, std::vector<std::pair<int, int>>());
    while(--E >= 0) {
        int s, t, d;
        std::cin >> s >> t >> d;
        edges[s].push_back(std::make_pair(t, d));
    }

    std::vector<int> dist(V, std::numeric_limits<int>::max());
    dist[r] = 0;
    while(--V >= 0){
        for(int i = 0; i < edges.size(); ++i) {
            for(const auto& edge: edges[i]) {
                int v = edge.first;
                int w = edge.second;
                if(dist[i] != std::numeric_limits<int>::max()) {
                    dist[v] = std::min(dist[v], dist[i] + w);
                }
            }
        }
    }

    bool isNegative = false;
    for(int i = 0; i < edges.size(); ++i) {
        for(const auto& edge: edges[i]) {
            int v = edge.first;
            int w = edge.second;
            if(dist[i] != std::numeric_limits<int>::max()
               && dist[v] > dist[i] + w) isNegative = true;
        }
    }

    if(isNegative) {
        std::cout << "NEGATIVE CYCLE" << std::endl;
    } else {
        for (auto val: dist) {
            if(val != std::numeric_limits<int>::max())std::cout << val << std::endl;
            else std::cout << "INF" << std::endl;
        }
    }

    return 0;
}