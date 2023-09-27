//
// Created by tac on 2016/10/12.
//

#include <cstdlib>
#include <string>
#include <iostream>

std::string get_range(int a, int b, int c) {
    std::string ans;

    if (a < b && b < c) {
        ans = std::string {"Yes"};
    } else {
        ans = std::string {"No"};
    }
    return ans;
}

int main() {
    int a;
    int b;
    int c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << get_range(a, b, c) << std::endl;
    return EXIT_SUCCESS;
}