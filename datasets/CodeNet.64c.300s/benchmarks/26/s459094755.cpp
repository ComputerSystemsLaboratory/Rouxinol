#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

 
// aのb乗をO(log b)で計算する
LL pow_mod(LL a, LL b, LL mod){
    if(b == 0) return 1;
    LL res = pow_mod(a * a % mod, b / 2, mod);
    if(b & 1) res = res * a % mod;
    return res;
}

int main(){
LL a, b;
cin >> a >> b;
cout << pow_mod(a, b, 1000000007) << endl;
}