#include <iostream>
int main() {
    int n, t;
    std::cin >> n;
    t = n / 3600;
    std::cout << t << ':';
    n -= t * 3600;
    t = n / 60;
    n -= t * 60;
    std::cout << t << ':' << n << std::endl;
}

