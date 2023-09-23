#include <iostream>

int gcd(int x, int y)
{
    if (x < y) {
        int tmp = x;
        x = y;
        y = tmp;
    }
    while (y > 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main()
{
    int x, y;
    std::cin >> x >> y;
    int ans = gcd(x, y);
    std::cout << ans << std::endl;
    return 0;
}