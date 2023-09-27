#include <iostream>

int gcd(int a, int b) {
    if (a > b) {
        if (b == 0) {
            return a;
        } else {
            return gcd(b, a % b);
        }
    } else {
        if (a == 0 ) {
            return b;
        } else {
            return gcd(a, b % a);
        }
    }
}

int main() {
    int a, b;
    std::cin >> a >> b;
    
    std::cout << gcd(a, b) << std::endl;;
}
