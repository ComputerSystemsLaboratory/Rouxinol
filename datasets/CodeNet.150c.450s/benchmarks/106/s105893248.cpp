//
// Created by tac on 2016/10/12.
//

#include <cstdlib>
#include <iostream>

int count_divisor(int a, int b, int c) {
    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (c % i == 0) {
            ++count;
        }
    }
    return count;
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << count_divisor(a, b, c) << std::endl;
    return EXIT_SUCCESS;
}