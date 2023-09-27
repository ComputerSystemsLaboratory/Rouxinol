//
// Created by tac on 2016/10/23.
//

#include <cstdlib>
#include <iostream>

namespace {

int gcd(const int x, const int y) {
    int m;
    int n;
    int t;
    if (x > y) {
        m = x;
        n = y;
    } else {
        m = y;
        n = x;
    }
    while (n > 0) {
        t = n;
        n = m % n;
        m = t;
    }
    return m;
}

}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << gcd(x, y) << std::endl;
    return EXIT_SUCCESS;
}