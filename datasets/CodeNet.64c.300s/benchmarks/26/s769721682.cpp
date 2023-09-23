#include <bits/stdc++.h>


int main() {
    int m, n;
    std::cin >> m >> n;

    long long int MAX = 1000000007;

    long long int val = m;
    long long int mod = 1;
    while (n > 0) {
        if (n % 2 != 0) {
            mod = (mod * val) % MAX;
        }
        n /= 2;
        val = (val * val) % MAX;
    }
    std::cout << mod << std::endl;
}

