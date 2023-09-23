#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

const long mod = 1000000007;

long f(long m, long n) {
    if (n == 0) return 1;
    if (n % 2 == 1) return m * f(m, n - 1) % mod;
    long r = f(m, n / 2) % mod;
    return r * r % mod;
}

int main() {
    long m, n;
    cin >> m >> n;
    cout << f(m, n) << endl;
}
