#include <iostream>
#include <set>
#include <unordered_map>

std::set<int> coins;
std::unordered_map<int, int> memo;

int get_minimum_count(int n) {
    if (coins.find(n) != coins.end()) {
        return 1;
    } else if (memo.find(n) != memo.end()) {
        return memo[n];
    } else {
        int min_count = n;
        for (int next : coins) {
            if (next < n) {
                min_count = std::min(get_minimum_count(n - next), min_count);
            }
        }
        min_count += 1;
        memo[n] = min_count;
        return min_count;
    }
}

int main() {
    int n, m;
    std::cin >> n >> m;

    for (int i = 0; i < m; i ++) {
        int c;
        std::cin >> c;
        coins.insert(c);
    }
    std::cout << get_minimum_count(n) << std::endl;
}

