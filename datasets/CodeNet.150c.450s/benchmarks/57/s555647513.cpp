//
// Created by tac on 2016/10/12.
//

#include <cstdlib>
#include <string>
#include <iostream>

int calc(int a, std::string op, int b) {
    int res;
    if (op == "+") {
        res = a + b;
    } else if (op == "-") {
        res = a - b;
    } else if (op == "/") {
        res = a / b;
    } else if (op == "*") {
        res = a * b;
    } else {
        throw std::runtime_error("");
    }
    return res;
}

int main() {
    int a, b;
    std::string op;
    while (true) {
        std::cin >> a >> op >> b;
        if (op == "?") {
            break;
        }
        std::cout << calc(a, op, b) << std::endl;
    }
    return EXIT_SUCCESS;
}