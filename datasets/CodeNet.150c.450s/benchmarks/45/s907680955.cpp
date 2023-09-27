#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MOD = 1e9 + 7;

ll pow(int m, int n){
    ll res = 1;
    ll x = m;
    while(n){
        if(n&1)
            res = (res * x) % MOD;
        x = (x * x) % MOD;
        n >>= 1;
    }
    return res;
}

int main(){
    int m, n; cin >> m >> n;
    cout << pow(m, n) << endl;
    return 0;
}