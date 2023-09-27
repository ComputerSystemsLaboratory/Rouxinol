#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const ll MOD=1e9+7;

ll pw(ll n,ll k){
    ll res=1;
    while(k){
        if(k&1)(res*=n)%=MOD;
        (n*=n)%=MOD;
        k>>=1;
    }
    return res;
}

int main(){
    int n,m;cin>>n>>m;
    cout<<pw(n,m)<<endl;
}
