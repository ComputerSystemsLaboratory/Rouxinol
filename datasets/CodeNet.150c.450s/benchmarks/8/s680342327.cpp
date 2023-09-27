//
// Created by tac on 2016/10/16.
//

#include <cstdlib>
#include <utility>
#include <string>
#include <iostream>

namespace {

std::pair<int, int> calc_point(const std::string& s1, const std::string& s2) {
    std::pair<int, int> point;
    if (s1 > s2) {
        point.first = 3;
        point.second = 0;
    } else if (s1 < s2) {
        point.first = 0;
        point.second = 3;
    } else {
        point.first = 1;
        point.second = 1;
    }

    return point;
}

}

int main() {
    int n;
    std::string s1, s2;
    int p1 = 0;
    int p2 = 0;
    std::pair<int, int> point;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> s1 >> s2;
        point = calc_point(s1, s2);
        p1 += point.first;
        p2 += point.second;
    }
    std::cout << p1 << " " << p2 << std::endl;
    return EXIT_SUCCESS;
}