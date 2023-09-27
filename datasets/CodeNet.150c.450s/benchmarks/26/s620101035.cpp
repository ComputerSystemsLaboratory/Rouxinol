#include <cstdlib>
#include <iostream>
#include <sstream>

std::string eq_string(int a, int b) {
    std::string res;

    if (a < b) {
        res = std::string {"a < b"};
    } else if (a > b) {
        res = std::string {"a > b"};
    } else {
        res = std::string {"a == b"};
    }

    return res;
}

int main() {
    int a;
    int b;

    std::cin >> a;
    std::cin >> b;
    std::cout << eq_string(a, b) << std::endl;

    return EXIT_SUCCESS;
}