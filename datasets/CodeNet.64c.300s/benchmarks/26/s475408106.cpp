#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const ull md=1000000007;

ll mod_pow(ull x,ull n,ull mod){
    ull res=1;
    while(n>0){
        if(n&1) res=res*x%mod;
        x=x*x%mod;
        n>>=1;
    }
    return res;
}

int main(){
    ull m,n;
    scanf("%llu %llu",&m,&n);
    printf("%lld\n",mod_pow(m,n,md));
    return 0;
}