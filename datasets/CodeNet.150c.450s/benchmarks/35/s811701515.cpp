#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    unsigned int n, i;
    int ai;
    std::vector<int> a;
    std::vector<int> dp;
    while (std::cin >> n && n) {
        for (i = 0; i < n; i++) {
            std::cin >> ai;
            a.push_back(ai);
        }
        dp.push_back(a.front());
        for (i = 1; i < n; i++) {
            dp.push_back(std::max(dp[i - 1] + a[i], a[i]));
        }
        std::cout << *std::max_element(dp.begin(), dp.end()) << std::endl;
        a.clear();
        dp.clear();
    }
    return 0;
}