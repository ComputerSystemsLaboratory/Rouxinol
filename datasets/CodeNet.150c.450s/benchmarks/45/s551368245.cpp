#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll M = 1000000007;

ll mypow(ll x,ll e) {
    if( e == 0 )  return 1;
    if(e%2 == 0) return mypow(x*x%M, e/2) % M;
    else   	  return mypow(x*x%M, e/2) * x % M;
}

int main () {
    ll m,n;
    cin >> m >> n;
    cout << mypow(m,n) << endl;
    return 0;
}