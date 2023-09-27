//
// Created by tac on 2016/10/16.
//

#include <algorithm>
#include <cstdlib>
#include <string>
#include <iostream>

namespace {

void print(const std::string &str,
           std::string::size_type a,
           std::string::size_type b) {
    std::cout << str.substr(a, b - a + 1) << std::endl;
    return;
}

const std::string reverse(const std::string &str,
                          std::string::size_type a,
                          std::string::size_type b) {
    std::string ret = str;
    std::reverse(ret.begin() + a, ret.begin() + b + 1);
    return ret;
}

const std::string replace(const std::string &str,
                          std::string::size_type a,
                          std::string::size_type b,
                          const std::string &rep) {
    std::string ret = str;
    ret.replace(ret.begin() + a, ret.begin() + (b + 1), rep);
    return ret;
}

}

int main() {
    std::string str;
    int n;
    std::string op, rep;
    int a, b;
    std::cin >> str;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> op;
        std::cin >> a >> b;
        if (op == "print") {
            print(str, a, b);
        } else if (op == "reverse") {
            str = reverse(str, a, b);
        } else if (op == "replace") {
            std::cin >> rep;
            str = replace(str, a, b, rep);
        } else {
            throw std::runtime_error("");
        }
    }
    return EXIT_SUCCESS;
}