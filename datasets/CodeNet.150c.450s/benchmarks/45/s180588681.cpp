#include <iostream>
using namespace std;

// a^n mod を計算する
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
    // 3^45 mod. 1000000007 を計算してみる
    long long a,b;
    cin>>a>>b;
    cout << modpow(a, b, 1000000007) << endl;
}
