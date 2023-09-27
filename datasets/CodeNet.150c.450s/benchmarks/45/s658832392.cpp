#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

//べき乗を求める関数(繰り返し自乗法) O(logN)
int64_t power(int64_t x, int64_t n, int64_t mod){
    int64_t res = 1;
    if(n > 0){
        res = power(x, n/2, mod);
        if(n%2 == 0) res = (res * res) % mod;
        else res = (((res * res) % mod) * x) % mod;
    }
    return res;
}

int main(){
    int m, n;
    cin >> m >> n;
    cout << power(m, n, MOD) << endl;
    return 0;
}
