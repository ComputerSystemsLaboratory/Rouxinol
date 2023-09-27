#include <iostream>

int main()
{
    int a, b;
    while (std::cin >> a >> b) {
        int sum = a + b;
        int digit = 1;
        while ((sum /= 10) >= 1) {
            digit++;
        }
        std::cout << digit << std::endl;
    }

    return 0;
}