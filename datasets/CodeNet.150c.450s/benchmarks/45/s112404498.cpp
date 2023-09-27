#include <iostream>

// namespace
using namespace std;

// consts
int MOD = 1000000007;  // https://qiita.com/drken/items/3b4fdf0a78e7a138cd9a

long long modpow(long long a, long long p) {
    if (p == 1) return a % MOD;
    if (p % 2 == 1) return modpow(a * a % MOD, p / 2) * a % MOD;
    else return modpow(a * a % MOD, p / 2) % MOD;
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << modpow(m, n) << endl;
    return 0;
}

