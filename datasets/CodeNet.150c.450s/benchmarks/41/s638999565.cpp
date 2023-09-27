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
    std::cin >> V >> E;

    std::vector<std::vector<int>> dist(V, std::vector<int>(V, std::numeric_limits<int>::max()));
    while(--E >= 0) {
        int s, t, d;
        std::cin >> s >> t >> d;
        dist[s][t] = d;
    }

    for(int i = 0; i < V; ++i)
        dist[i][i] = 0;

    for(int k = 0; k < V; ++k) {
        for(int i = 0; i < V; ++i) {
            for(int j = 0; j < V; ++j) {
                if(dist[i][k] != std::numeric_limits<int>::max()
                   && dist[k][j] != std::numeric_limits<int>::max())dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    bool isNegative = false;
    for(int i = 0; i < V; ++i)
        isNegative |= dist[i][i] < 0;

    if(isNegative) {
        std::cout << "NEGATIVE CYCLE" << std::endl;
    } else {
        for(const auto& ds: dist) {
            for(int i = 0; i < V; ++i){
                std::cout << (ds[i] != std::numeric_limits<int>::max() ? std::to_string(ds[i]) : "INF");
                if(i < V - 1) std::cout << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}