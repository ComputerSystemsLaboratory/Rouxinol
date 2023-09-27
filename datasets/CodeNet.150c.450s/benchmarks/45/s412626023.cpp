#include <bits/stdc++.h>
using namespace std;

long MOD=1e9+7;
long MAX=200000;


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
  long M,N;
  cin>>M>>N;
  long ans=modpow(M,N,MOD);
  cout<<ans<<endl;
}

