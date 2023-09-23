#include <iostream>

int main(int argc, char const *argv[]) {
    int a, b;
    std::cin >> a;
    std::cin >> b;

    if (a < b) {
        std::cout << "a < b" << std::endl;
    }else if (a > b) {
        std::cout << "a > b" << std::endl;
    }else if (a == b) {
        std::cout << "a == b" << std::endl;
    }

    return 0;
}