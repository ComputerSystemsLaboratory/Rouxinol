#include"bits/stdc++.h"
using namespace std;

const int64_t mod = 1000000007;

int64_t MOD(int64_t m, int64_t n) {
    int64_t result = 1;
    while (n > 0) {
        if (n & 1) {
            result *= m;
            result %= mod;
        }

        m *= m;
        m %= mod;
        n /= 2;
    }

    return result;
}

int main() {
    uint64_t m, n;
    cin >> m >> n;
    cout << MOD(m, n) << endl;
}
