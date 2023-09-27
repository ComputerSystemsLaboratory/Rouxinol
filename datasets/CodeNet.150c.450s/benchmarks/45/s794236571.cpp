//繰り返し二乗法
//x^nを高速に求めるアルゴリズム
//pow()はどうなっているんだろう
#include<math.h>
#include<iostream>
#define MOD 1000000007
using namespace std;

long long mod_poW(long long x, long long n){
    long long res = 1;
    while(n > 0){
        if(n & 1) res = res * x % MOD;

        x = x * x % MOD;
        n = n >> 1;
    }

    return res;
}

int main(){
    long long x, n; cin >> x >> n;
    //cout << pow(x, n) << endl;
    cout << mod_poW(x, n) << endl;
    return 0;
}
