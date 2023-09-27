#include <iostream>
#include <deque>
#include <utility>
int main() {
    std::string s;
    std::getline(std::cin, s);
    std::deque<std::pair<int, int>> a;
    std::deque<int> b;
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == '\\') {
            b.push_back(i);
        } else if (s[i] == '/' && !b.empty()) {
            int c = b.back();
            b.pop_back();
            int d = i - c;
            while (!a.empty() && c <= a.back().first) {
                d += a.back().second;
                a.pop_back();
            }
            a.emplace_back(c, d);
        }
    }
    int x = 0;
    for (auto&& e: a) {
        x += e.second;
    }
    std::cout << x << std::endl << a.size();
    for (auto&& e: a) {
        std::cout << ' ' << e.second;
    }
    std::cout << std::endl;
}

