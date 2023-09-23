#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c;

    if (a >= b) {
        d = a;
        a = b;
        b = d;
    }

    if (b >= c) {
        d = b;
        b = c;
        c = d;
    }

    if (a >= b) {
        d = a;
        a = b;
        b = d;
    }

    std::cout << a << " " << b << " " << c << std::endl;
    return 0;

}