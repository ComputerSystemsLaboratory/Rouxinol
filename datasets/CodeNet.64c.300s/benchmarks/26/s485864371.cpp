

#include <bits/stdc++.h>
using namespace std;


long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

int main() {
    const long long mod = 1e9 + 7;
    long long m, n;
    cin >> m >> n;
    cout << modpow(m, n, mod) << endl;
}


