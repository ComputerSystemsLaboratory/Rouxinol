#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <functional>
#include <utility>
#include <algorithm>
#include <iomanip>

using Pair = std::pair<int, int>;
constexpr int infl = 1e+9;

int n;
int cost[11][11];

bool func() {
    std::fill(cost[0], cost[0] + sizeof(cost) / sizeof(int), infl);
    
    std::cin >> n;
    
    if(n == 0)
        return false;
    
    int from, to, c;
    int tMax = 0;
    for(int i = 0; i < n; ++i) {
        std::cin >> from >> to >> c;
        
        cost[from][to] = c;
        cost[to][from] = c;
        cost[to][to] = 0;
        cost[from][from] = 0;
        
        tMax = std::max({tMax, to, from});
    }
    ++tMax;
    
    for(int i = 0; i < tMax; ++i)
        for(int j = 0; j < tMax; ++j)
            for(int k = 0; k < tMax; ++k) {
                cost[j][k] = std::min(cost[j][k], cost[j][i] + cost[i][k]);
            }
    
    int costMin = infl, idx = 0;
    for(int i = 0; i < tMax; ++i) {
        int sum = 0;
        
        for(int j = 0; j < tMax; ++j) {
            sum += cost[i][j];
        }
        
        if(costMin > sum) {
            idx = i;
            costMin = sum;
        }
    }
    
    std::cout << idx << " " << costMin << std::endl;
    
    return true;
}

int main() {
    while(func());
}