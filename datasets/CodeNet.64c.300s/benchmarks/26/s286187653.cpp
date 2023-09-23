/* power.cpp
    繰り返し二乗法で pow(x,n) を求める
*/

#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

long long pow(long long x, long long n) {
    long long ret = 1;
    while (n > 0) {
        if (n & 1) ret = ret * x % MOD;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x = x * x % MOD;
        n >>= 1;  // n を1bit 左にずらす
    }
    return ret;
}

int main() {
    long long x, n;
    cin >> x >> n;
    cout << pow(x, n) << endl;
    return 0;
}

