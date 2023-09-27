#include <bits/stdc++.h>
#define Mod 1000000007
#define ll long long
using namespace std;

ll Power(ll n, ll m){
    ll res=1;
    while(m>0){
        if(m & 1) res = res * n % Mod;
        n = n * n % Mod;
        m = m>>1;
    }
    return res;
}


int main(){
    ll n,m;
    scanf("%lli %lli", &n, &m);
    printf("%lli\n",Power(n,m));
    //cout<<Power(n,m,Mod)<<endl;
    return 0;
}

