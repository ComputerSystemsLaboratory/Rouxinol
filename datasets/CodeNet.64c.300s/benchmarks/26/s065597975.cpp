#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
//#define D 1000000007

ull power(ull x,int n,int mod){
    ull res=1;
    x%=mod;
    while(n>0){
        if(n%2)res=(res*x)%mod;
        n>>=1;
        x=(x*x)%mod;
    }
    return res;
}

int main(){
    ull x;
    int n;
    cin>>x>>n;
//    cout<<power(x,n,D)<<endl;
    cout<<power(x,n,1000000007)<<endl;
}