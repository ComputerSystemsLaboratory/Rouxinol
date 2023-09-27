//Power
#include <iostream>

using namespace std;

static const long long MOD = 1000000007;

long long  power(long long m, long long n) {
    if(n == 0) return 1;
    if(n == 1) return m;
    long long res = power(m, n / 2);
    res = res * res % MOD;
    if(n % 2 == 1) res *= m;
    return res % MOD;
}

int main() {
    long long m, n;
    cin >> m >> n;
    cout << power(m, n) << endl;
}
