//
// Created by tac on 2016/10/11.
//

#include <cstdlib>
#include <iostream>

int pow3(int n) {
    return n * n * n;
}

int main() {
    int n;

    std::cin >> n;

    std::cout << pow3(n) << std::endl;

    return EXIT_SUCCESS;
}