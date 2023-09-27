#include <iostream>
#include <string>
#include <algorithm>
int main() {
    std::string s, op;
    std::cin >> s;
    int q;
    std::cin >> q; // skip
    int a, b;
    while (std::cin >> op >> a >> b) {
        if (op == "print") {
            std::cout << s.substr(a, b - a + 1) << std::endl;
        } else if (op == "reverse") {
            std::reverse(s.begin() + a, s.begin() + b + 1);
        } else {
            std::string p;
            std::cin >> p;
            s.replace(a, b - a + 1, p);
        }
    }
}

