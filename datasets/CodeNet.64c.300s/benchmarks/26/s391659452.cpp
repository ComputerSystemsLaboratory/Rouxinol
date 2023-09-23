#include <iostream>

using namespace std;

const int MOD = 1000000007;

// mのn乗を求める
long power(int m, int n){
    long ret = 1;
    long t = 0; 
    long p = m;
    while(n != 0){
        if((n >> t)&1 == 1){
            ret = ret * p % MOD;
            n ^= 1<<t;
        }
        t++;
        p = p * p % MOD;
    }
    return ret;
}

int main(){
    int m, n;

    cin >> m >> n;

    cout << power(m, n) << endl;

    return 0;
}
