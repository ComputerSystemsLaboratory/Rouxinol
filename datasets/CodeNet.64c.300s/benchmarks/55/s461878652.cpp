#include <iostream>
#include <stdio.h>

int main() {
    int i = 0;
    int num;
    std::cin >> num;
    while (num) {
        std::cout << "Case " << ++i << ": " << num << std::endl;
        std::cin >> num;
    }

    return 0;
}