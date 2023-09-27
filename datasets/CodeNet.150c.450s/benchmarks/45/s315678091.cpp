#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
long long modpow(long long x,long long y){
    if(y==1)return x%mod;
    else if(y%2) return (x*modpow(x,y-1))%mod;
    long long t=modpow(x,y/2);
    return t*t%mod;
}
int main(){
    long long m,n;scanf("%lld %lld",&m,&n);
    printf("%lld\n",modpow(m,n));
}
