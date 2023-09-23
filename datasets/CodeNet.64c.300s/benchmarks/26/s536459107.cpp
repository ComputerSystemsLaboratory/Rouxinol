#include <iostream>
using namespace std;
const int MOD = 1000000007;

long long func(long long x, long long y) {
    if (y == 0) return 1;
    if (y % 2 == 0) {
        return func(x * x % MOD, y / 2);
    } else {
        return x * func(x, y - 1) % MOD;
    }
}

int main() {
    int m, n; cin >> m >> n;
    cout << (func(m, n) % MOD) << endl;
}
