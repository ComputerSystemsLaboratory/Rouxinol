//
// Created by tac on 2016/10/27.
//

#include <cstdlib>
#include <iostream>
#include <cmath>

namespace {
int digit(long n) {
    return static_cast<int>(std::floor(std::log10(n)) + 1);
}
}

int main() {
    long a, b;
    while (std::cin >> a >> b) {
        std::cout << digit(a + b) << std::endl;
    }
    return EXIT_SUCCESS;
}