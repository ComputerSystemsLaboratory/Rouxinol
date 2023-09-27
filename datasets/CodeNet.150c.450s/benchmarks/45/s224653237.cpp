#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

const long MOD = 1000000007;

long mypow(int m, int n) {
    if (n == 1) return m;
    long d = mypow(m, n / 2);
    if (n % 2 == 0) {
        return d % MOD * d % MOD;
    } else {
        return d % MOD * d % MOD * m % MOD;
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << mypow(m, n) << endl;
}