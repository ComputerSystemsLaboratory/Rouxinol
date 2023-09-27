#include <iostream>
#include <cstdlib>

void gcd(int a, int b); 

int main(void) {
    int a;
    int b;
    std::cin >> a >> b;
    gcd(a, b);
    return EXIT_SUCCESS;
}

void gcd(int a, int b) {
    if (b == 0) {
        std::cout << a << std::endl;
        return;
    } else {
        return gcd(b, a % b);
    }
}