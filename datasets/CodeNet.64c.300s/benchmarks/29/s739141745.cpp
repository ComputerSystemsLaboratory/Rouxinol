#include <cmath>
#include <iostream>

int main()
{
    int x, e;
    int sum_min;

    while (std::cin >> e && e > 0) {
        sum_min = 100000000;
        for (int i = 0; i * i <= e; i++) {
            for (int j = 0; j * j * j <= e - i * i; j++) {
                x = e - i * i - j * j * j;
                if (x >= 0 && x + i + j < sum_min) {
                    sum_min = x + i + j;
                }
            }
        }
        std::cout << sum_min << '\n';
    }
    return 0;
}

