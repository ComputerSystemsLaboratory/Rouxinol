#include <bits/stdc++.h>
using namespace std;
#ifdef ENABLE_DEBUG_OUTPUT
#define DEBUG_LOG(s) cout << s << endl;
#else
#define DEBUG_LOG(s) void();
#endif

int64_t modpow(int64_t a, int64_t n, int64_t mod) {
    int64_t res = 1;

    while(n > 0) {
        if(n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }

    return res;
}

int main(){
    int m, n;
    cin >> m >> n;
    const int MOD = 1000000007;

    cout << modpow(m, n, MOD) << endl;
    return 0;
}
