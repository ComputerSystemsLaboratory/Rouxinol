#include<bits/stdc++.h>
using namespace std;

//using ll=long long;

const long long MOD = 1000000007;
long long INF = 90000000001000;
long long m,n;

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

cin >> m >> n;

long long ans;
ans = modpow(m,n,MOD);
cout << ans << endl;
return 0;
}



