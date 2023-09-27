#include<iostream>

using i64 = int_fast64_t;

constexpr i64 MOD = 1e9+7;

i64 mpow(i64 m,i64 n){
    i64 e = 1;
    while(n){
        if(n&1)e*=m;
        m*=m;
        n>>=1;
        m%=MOD;
        e%=MOD;
    }
    return e;
}

int main(){
    i64 m,n;
    std::cin>>m>>n;
    std::cout<<mpow(m,n)<<std::endl;
}
