#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

int main() {
    int num, weight;
    std::vector< std::pair<int, int> > list;
    std::vector< std::vector<int> > dp;
    std::cin >> num >> weight;
    for(int i = 0; i < num; i++) {
        int v, w;
        std::cin >> v >> w;
        list.push_back(std::make_pair(v, w));
    }
    dp.resize(num + 1);
    for(auto itr = dp.begin(); itr != dp.end(); itr++) {
        itr->resize(weight + 1);
    }

    for(int i = 0; i <= num; i++) {
        for(int j = 0; j <= weight; j++) {
            if(i == 0 || j == 0) {
                dp[i][j] = 0;
                continue;
            }

            dp[i][j] = dp[i - 1][j];

            int v = list[i - 1].first;
            int w = list[i - 1].second;
            if(w <= j) {
                dp[i][j] = std::max(dp[i][j], dp[i - 1][j - w] + v);
            }
        }
    }

    std::cout << dp.back().back() << std::endl;

    return 0;
}