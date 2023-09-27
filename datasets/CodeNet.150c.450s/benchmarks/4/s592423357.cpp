//
// Created by tac on 2016/10/13.
//

#include <cstdlib>
#include <string>
#include <iostream>

std::string get_performace(int a, int b, int c) {
    std::string res;
    if (a < 0 || b < 0) {
        res = "F";
    } else if (a + b >= 80) {
        res = "A";
    } else if (a + b >= 65) {
        res = "B";
    } else if (a + b >= 50) {
        res = "C";
    } else if (a + b >= 30) {
        if (c >= 50) {
            res = "C";
        } else {
            res = "D";
        }
    } else {
        res = "F";
    }
    return res;
}

int main() {
    int a, b, c;

    while (true) {
        std::cin >> a >> b >> c;
        if (a < 0 && b < 0 && c < 0) {
            break;
        }
        std::cout << get_performace(a, b, c) << std::endl;
    }

    return EXIT_SUCCESS;
}