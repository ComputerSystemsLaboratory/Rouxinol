#include <iostream>

int main() {
    int i;
    std::cin >> i;
    if (i >= 0 && i <= 100) {
        std::cout << i * i * i;
        std::cout << std::endl;
    }
}