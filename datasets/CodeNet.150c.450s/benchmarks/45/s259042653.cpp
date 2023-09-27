#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9+7;

ll mod_pow(ll a,ll b){
    ll res=1;
    vector<ll> mm(60);
    mm[0]=a%mod;
    for(int i=1; i<=59; i++){
        mm[i]=mm[i-1]*mm[i-1]%mod;
    }
    for(int i=0; i<=59; i++){
        if(b>>i & 1)
            res=res*mm[i]%mod;
    }
    return res;
}

int main(){
    ll m,n;
    cin >> m >> n;
    cout << mod_pow(m,n) << endl;
    return 0;
}
