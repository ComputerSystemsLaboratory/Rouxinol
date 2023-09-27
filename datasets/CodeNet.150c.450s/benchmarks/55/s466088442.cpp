//
// Created by tac on 2016/10/15.
//

#include <cstdlib>
#include <string>
#include <iostream>

namespace {

inline int ctoi(char c) {
    return c - '0';
}

}

int main() {
    std::string str;

    while (true) {
        getline(std::cin, str);
        if (str.size() == 1 && str[0] == '0') {
            break;
        }
        int sum = 0;
        for (auto c: str) {
            sum += ctoi(c);
        }
        std::cout << sum << std::endl;
    }

    return EXIT_SUCCESS;
}