#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;

ll mod_pow(ll x, ll n, ll mod) {
    ll res = 1;
    while(n > 0) {
        if(n & 1) res=res*x%mod;
        x=x*x%mod;
        n>>=1;
    }
    return(res);
}
int main(void) {
    int m, n; cin >> m >> n;
    
    cout << mod_pow(m, n, 1000000007) << endl;
    return(0);
}