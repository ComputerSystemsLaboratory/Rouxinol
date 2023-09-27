#include <iostream>
#include <vector>
int main() {
    std::string s;
    std::vector<long> v;
    while (std::cin >> s) {
        long x, y;
        if (s == "+") {
            x = v.back();
            v.pop_back();
            y = v.back();
            v.pop_back();
            v.push_back(x + y);
        } else if (s == "-") {
            x = v.back();
            v.pop_back();
            y = v.back();
            v.pop_back();
            v.push_back(y - x);
        } else if (s == "*") {
            x = v.back();
            v.pop_back();
            y = v.back();
            v.pop_back();
            v.push_back(x * y);
        } else {
            x = std::stol(s);
            v.push_back(x);
        }
    }
    std::cout << v.back() << std::endl;
}

