#include <bits/stdc++.h>
using namespace std;
#define int long long

int mod_pow(int n, int e, int mod){
    int ans = 1;
    n = n % mod;
    while(e != 0){
        if(e % 2 == 1){
            ans = (ans * n) % mod;
        }
        e /= 2;
        n = (n * n) % mod;
    }
    return ans;
}

signed main(){
    // cout << fixed << setprecision(10) << flush;

    int m, n;
    cin >> m >> n;
    int mod = 1e9 + 7;
    cout << mod_pow(m, n, mod) << endl;

    return 0;
}
