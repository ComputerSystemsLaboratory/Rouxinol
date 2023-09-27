//
// Created by tac on 2016/10/12.
//

#include <cstdlib>
#include <iostream>

int main() {
    int n;
    int i = 0;
    while (true) {
        std::cin >> n;
        if (n <= 0) {
            break;
        }
        ++i;
        std::cout << "Case " << i << ": " << n << std::endl;
    }
    return EXIT_SUCCESS;
}