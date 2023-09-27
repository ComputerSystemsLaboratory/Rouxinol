#include <iostream>
#include <deque>
#include <utility>
int main() {
    int n, q;
    std::cin >> n >> q;
    std::deque<std::pair<std::string, int>> p;
    std::string s;
    int t;
    while (std::cin >> s >> t) {
        p.emplace_back(s, t);
    }
    int v = 0;
    while (!p.empty()) {
        auto e = p.front();
        p.pop_front();
        if (e.second > q) {
            e.second -= q;
            v += q;
            p.push_back(e);
        } else {
            v += e.second;
            std::cout << e.first << ' ' << v << std::endl;
        }
    }
}

