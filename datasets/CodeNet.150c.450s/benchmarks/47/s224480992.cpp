//
// Created by tac on 2016/10/12.
//
#include <cstdlib>
#include <string>
#include <iostream>

std::string get_in_circle(int w, int h, int x, int y, int r) {
    std::string res;
    if (x >= 0 + r && y >= 0 + r && x <= w -r && y <= h - r) {
        res = std::string {"Yes"};
    } else {
        res = std::string {"No"};
    }
    return res;
}

int main() {
    int w, h, x, y, r;
    std::cin >> w >> h >> x >> y >> r;
    std::cout << get_in_circle(w, h, x, y, r) << std::endl;
    return EXIT_SUCCESS;
}