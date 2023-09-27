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
    int V, E;
    std::cin >> V >> E;
    std::vector<std::vector<std::pair<int, int>>> edges(V, std::vector<std::pair<int, int>>());
    while(--E >= 0) {
        int s, t, w;
        std::cin >> s >> t >> w;
        edges[s].push_back(std::make_pair(t, w));
        edges[t].push_back(std::make_pair(s, w));
    }

    int cnt = V - 1;
    int ans = 0;
    std::vector<bool> isUsed(V, false);
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pque;
    isUsed[0] = true;
    for(auto edge: edges[0])
        pque.push(std::make_pair(edge.second, edge.first));

    while(--cnt >= 0) {
        while(!pque.empty()) {
            auto p = pque.top();
            pque.pop();
            if(!isUsed[p.second]) {
                isUsed[p.second] = true;
                ans += p.first;
                for(auto edge: edges[p.second])
                    pque.push(std::make_pair(edge.second, edge.first));
                break;
            }
        }
    }

    std::cout << ans << std::endl;

    return 0;
}