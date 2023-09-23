/* ALDS1_10_A: Fibonacci Number */

#include <iostream>

const int MAX_N = 440;

long memo[MAX_N] = {};

long fibonacci(int n) {
    switch (n) {
        case 0:
        case 1:
            return 1;
        default:
            if (memo[n])
                return memo[n];
            else
                return memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fibonacci(n) << std::endl;
    return 0;
}