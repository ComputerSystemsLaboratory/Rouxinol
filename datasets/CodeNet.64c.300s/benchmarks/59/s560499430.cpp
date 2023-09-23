//
// Created by tac on 2016/10/23.
//

#include <cstdlib>
#include <cmath>
#include <iostream>

namespace {

bool is_prime(const int n) {
    if (n == 2 || n == 3) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    bool ret = true;
    int limit = static_cast<int>(std::ceil(std::sqrt(n)));
    for (int i = 3; i <= limit ; i += 2) {
        if (n % i == 0) {
            ret = false;
            break;
        }
    }
    return ret;
}

}

int main() {
    int n;
    int s;
    int count = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> s;
        if (is_prime(s)) {
            ++count;
        }
    }
    std::cout << count << std::endl;
    return EXIT_SUCCESS;
}