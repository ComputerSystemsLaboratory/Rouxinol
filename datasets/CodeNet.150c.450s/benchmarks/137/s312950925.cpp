#include <iostream>
#include <unordered_set>
int main() {
    int n;
    std::unordered_set<std::string> s;
    std::string t, u;
    std::cin >> n;
    while (n-- > 0) {
        std::cin >> t >> u;
        if (t == "insert") {
            s.insert(u);
        } else {
            std::cout << ((s.find(u) == s.end()) ? "no" : "yes") << std::endl;
        }
    }
}

