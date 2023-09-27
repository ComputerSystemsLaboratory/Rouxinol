#include <iostream>
#include <vector>
#include <functional>


std::vector<std::vector<int>> mats, cost;


int calcMin(int start, int end) {
    if (cost[start][end] != -1) return cost[start][end];

    int min_cost;
    for (int i = start; i < end; i++) {
        int tmp_cost = calcMin(start, i) + calcMin(i + 1, end)
            + mats[start][0] * mats[i][1] * mats[end][1];
        if (i == start) {
            min_cost = tmp_cost;
        }
        if (min_cost > tmp_cost) min_cost = tmp_cost;
    }
    cost[start][end] = min_cost;
    return cost[start][end];
}

int main() {
    int n;
    std::cin >> n;
    
    mats = std::vector<std::vector<int>>(n, std::vector<int>(2));
    cost = std::vector<std::vector<int>> (n, std::vector<int>(n, -1));

    for (int i = 0; i < n; i++) {
        std::cin >> mats[i][0] >> mats[i][1];
    }

    for (int i = 0; i < n; i++) {
        cost[i][i] = 0;
    }

    std::cout << calcMin(0, n - 1) << std::endl;
}

