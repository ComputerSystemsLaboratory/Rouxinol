#include <iostream>

int main(void) 
{
    int a, b, c;
    std::cin >>  a;
    std::cin >>  b;
    std::cin >>  c;
    if (a < c) {
        int t = a;
        a = c;
        c = t;
    }
    if (a < b) {
        int t = a;
        a = b;
        b = t;
    }
    if (b < c) {
        int t = b;
        b = c;
        c = t;
    }
    std::cout << c << " " << b << " " << a << std::endl;
    return 0;
}