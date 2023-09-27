#include <iostream>

using namespace std;
using LL = long long;
const LL MOD = 1'000'000'007L;

LL pow(LL m, int n) {
    if (n == 0) return 1;
    LL ret = pow(m * m % MOD, n / 2);
    if (n % 2) ret *= m;
    return ret % MOD;
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << pow(m, n) << endl;
}
