#include <cstdio>
#include <cstring>
#include <iostream>

auto main() -> int {
    int a, b;
    char str[100];
    while (std::cin >> a >> b) {
        std::sprintf(str, "%d", a+b);
        std::cout << strlen(str) << std::endl;
    }
}