#include<bits/stdc++.h>
typedef unsigned long long ullong;
const static ullong M = 1000000007;
// ullong res;

ullong power(ullong x, ullong n){
    ullong res = 1;
    if(n == 0){
        return 1;
    }
    res = power( (x * x)  % M, n / 2);
    if(n % 2 == 1){
        res = (res * x) % M;
    }
    return res;
}

int main(void){
    ullong a;
    ullong b;
    std::cin >> a >> b;
    
    std::cout << power(a, b) << std::endl;

    return 0;
}
