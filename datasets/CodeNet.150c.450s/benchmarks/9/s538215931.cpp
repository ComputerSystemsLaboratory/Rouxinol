//
// Created by tac on 2016/10/16.
//

#include <cstdlib>
#include <string>
#include <iostream>

namespace {

std::string shuffle(const std::string& str, std::string::size_type pos) {
    std::string ret;
    ret = str.substr(pos, str.length() - pos) + str.substr(0, pos);
    return ret;
}

}

int main() {
    std::string str;
    int n;
    int pos;
    while (true) {
        std::cin >> str;
        if (str == "-") {
            break;
        }
        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            std::cin >> pos;
            str = shuffle(str, pos);
        }
        std::cout << str << std::endl;
    }
    return EXIT_SUCCESS;
}