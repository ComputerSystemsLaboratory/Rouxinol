#include <iostream>
long long MOD = 1e9 + 7;
long long repeatedpow(long long x, long long y){
    if(y == 0) return 1;
    if(y % 2 == 0) return repeatedpow(x, y / 2)*repeatedpow(x, y / 2) % MOD;
    else return x*repeatedpow(x, y -1) %MOD;
}
int main(){
    long long m, n;
    std::cin >> m >> n;
    std::cout << repeatedpow(m, n) << std::endl;
}
