#include <iostream>
static bool is_prime(long n) {
    static long p[10000] = { 2l };
    static int ip = 1;
    for (int i = 0; i < ip; ++i) {
        if (n == p[i]) {
            return true;
        }
    }
    if (n % 2l == 0l) {
        return false;
    }
    for (long i = 3l; i * i <= n; i += 2l) {
        if (n % i == 0l) {
            return false;
        }
    }
    p[ip++] = n;
    return true;
}
int main() {
    int n, c = 0;
    long m;
    std::cin >> n; // skip
    while (std::cin >> m) {
        if (is_prime(m)) {
            ++c;
        }
    }
    std::cout << c << std::endl;
}

