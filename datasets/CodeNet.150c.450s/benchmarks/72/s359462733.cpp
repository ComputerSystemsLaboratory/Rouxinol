//
// Created by tac on 2016/10/15.
//

#include <cstdlib>
#include <string>
#include <iostream>

int main() {
    std::string str;

    getline(std::cin, str);

    char r;
    for (auto c: str) {
        if (isupper(c)) {
            r = tolower(c);
        }  else {
            r = toupper(c);
        }
        std::cout << r;
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}