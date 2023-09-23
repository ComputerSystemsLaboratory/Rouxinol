#include <iostream>

int main(void)
{
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (b < c && a < b) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}