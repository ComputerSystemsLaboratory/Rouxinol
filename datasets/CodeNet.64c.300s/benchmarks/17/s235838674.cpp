#include <iostream>

int tax(int rate, int price)
{
    return static_cast<int>(price * (100 + rate) / 100);
}

int main()
{
    int x, y, s = 0;

    while (std::cin >> x >> y >> s && s > 0) {
        int max;
        for (int i = 1; i < s; i++) {
            for (int j = i; j < s; j++) {
                if (tax(x, i) + tax(x, j) == s) {
                    if (tax(y, i) + tax(y, j) > max) {
                        max = tax(y, i) + tax(y, j);
                    }
                }
            }
        }
        std::cout << max << '\n';
        max = 0;
    }
    return 0;
}

