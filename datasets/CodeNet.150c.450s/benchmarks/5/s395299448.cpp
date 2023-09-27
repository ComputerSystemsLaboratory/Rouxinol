//
// Created by tac on 2016/10/12.
//

#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
    int n;
    int a;
    std::cin >> n;
    std::vector<int> vec;
    for (int i = 0; i < n; ++i) {
        std::cin >> a;
        vec.push_back(a);
    }
    std::string sep {""};
    for (int i = n - 1; i >= 0; --i) {
        std::cout << sep << vec[i];
        sep = std::string {" "};
    }
    std::cout << std::endl;
    return EXIT_SUCCESS;
}