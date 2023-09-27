#include <iostream>
#include <vector>
int main() {
    int n;
    std::vector<int> v;
    std::cin >> n; //skip
    while (std::cin >> n) {
        v.push_back(n);
    }
    for (auto&& e = v.crbegin(); e != v.crend(); ++e) {
        std::cout << ((e == v.crbegin()) ? "" : " ") << *e;
    }
    std::cout << std::endl;
}

