#include <iostream>
static long gcd(long x, long y) {
    while (y > 0) {
        long r = x % y;
        x = y;
        y = r;
    }
    return x;
}
int main() {
    long x, y;
    std::cin >> x >> y;
    std::cout << gcd(x, y) << std::endl;
}

