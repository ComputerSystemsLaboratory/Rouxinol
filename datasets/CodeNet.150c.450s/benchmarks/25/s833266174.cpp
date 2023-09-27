//
// Created by tac on 2016/10/15.
//

#include <cstdlib>
#include <string>
#include <iostream>

namespace {

const size_t ALPHA_SIZE = 26;

}

int main() {
    int count_char[ALPHA_SIZE] {};
    std::string str;

    while (true) {
        if (std::cin.eof()) {
            break;
        }
        getline(std::cin, str);
        for (auto c: str) {
            if (isalpha(c)) {
                int i = toupper(c) - 'A';
                count_char[i] += 1;
            }
        }
    }

    for (int i = 0; i < ALPHA_SIZE; ++i) {
        char c = i + 'a';
        std::cout << c << " : " << count_char[i] << std::endl;
    }

    return EXIT_SUCCESS;
}