#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ullong;

const ullong pnum = 1000000007;

//繰り返し自乗法
ullong power(ullong x, ullong n, ullong M){
    ullong res = 1;
    if ( n > 0 )
    {
        res =power(x ,n/2, M);
        if (n%2 == 0) res = (res * res) % M;
        else res = ( ((res * res) % M) * x) % M;
    }
    return res;
}

int main(){
    int m, n;
    cin >> m >> n;

    cout << power(m, n, pnum) << endl;

    return 0;
}
