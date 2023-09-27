#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v;
    std::vector<int> w;
    int n;
    std::cin >> n;
    while (n-- > 0) {
        int m;
        std::cin >> m;
        v.push_back(m);
    }
    std::cin >> n;
    while (n-- > 0) {
        int m;
        std::cin >> m;
        w.push_back(m);
    }
    int c = 0;
    for (auto&& e: w) {
        if (std::find(v.begin(), v.end(), e) != v.end()) {
            ++c;
        }
    }
    std::cout << c << std::endl;
}

