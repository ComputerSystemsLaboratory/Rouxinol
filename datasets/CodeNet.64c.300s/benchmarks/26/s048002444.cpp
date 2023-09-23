#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long i64;

const i64 MOD = 1000000007LL;

i64 powMod(i64 m, i64 n) {
    i64 res = 1;
    while(n > 0) {
        if(n & 1) (res *= m) %= MOD;
        n >>= 1;
        (m *= m) %= MOD;
    }
    return res;
}

int main() {
    i64 M, N; cin >> M >> N;
    cout << powMod(M, N) << endl;
}