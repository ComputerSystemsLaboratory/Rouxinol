//
// Created by tac on 2016/10/14.
//

#include <cstdlib>
#include <iostream>

namespace {

int count_comb(int n, int x) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            for (int k = j + 1; k <= n; ++k) {
//                std::cout << std::endl << "(" << i << ", " << j << ", " << k << ")";
                if (i + j + k == x) {
//                    std::cout << "=> OK" << std::endl;
                    ++count;
                }
            }
        }
    }
    return  count;
}

}

int main() {
    int n, x;

    while (true) {
        std::cin >> n >> x;
        if (n <= 0 && x <= 0) {
            break;
        }
        std::cout << count_comb(n, x) << std::endl;
    }

    return EXIT_SUCCESS;
}