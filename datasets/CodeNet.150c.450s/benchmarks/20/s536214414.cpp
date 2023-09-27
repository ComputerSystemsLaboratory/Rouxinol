#include <iostream>

int main() {
    unsigned int s;
    std::cin >> s;
    unsigned int m = s / 60; s -= m * 60;
    unsigned int h = m / 60; m -= h * 60;
    std::cout << h << ":" << m << ":" << s << std::endl;
}