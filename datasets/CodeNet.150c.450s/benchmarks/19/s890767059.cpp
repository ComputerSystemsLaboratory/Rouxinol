//
// Created by tac on 2016/10/12.
//

#include <algorithm>
#include <cstdlib>
#include <iostream>

int main() {
    int a, b;
    while (true) {
        std::cin >> a >> b;
        if (a <= 0 && b <= 0) {
            break;
        }
        std::cout << std::min(a, b) << " " << std::max(a, b) << std::endl;
    }
    return EXIT_SUCCESS;
}