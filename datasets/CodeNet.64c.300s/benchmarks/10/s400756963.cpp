#include <iostream>
#include <stdio.h>

int main() {
    int a, b;

    while (true) {
        std::cin >> a >> b;

        if (a == 0 && b == 0) {
            break;
        }
        
        if (a > b) {
            std::cout << b << ' ' << a << std::endl;
        } else {
            std::cout << a << ' ' << b << std::endl;
        }
    }
    return 0;
}