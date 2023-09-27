//
// Created by tac on 2016/10/27.
//

#include <cstdlib>
#include <iostream>

namespace {

bool is_traiangle(int a, int b, int c) {
    return (a * a == b * b + c * c) ||
           (b * b == a * a + c * c) ||
           (c * c == a * a + b * b);
}

}


int main() {
    int n;
    int a, b, c;
    std::string ans;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> a >> b >> c;
        if (is_traiangle(a, b, c)) {
            ans = "YES";
        } else {
            ans = "NO";
        }
        std::cout << ans << std::endl;
    }
    return EXIT_SUCCESS;
}