#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pint;

const int mod=1000000007;
ll mod_pow(ll x,ll n,ll mod){
    ll res=1;
    while(n>0){
        if(n&1) res=res*x%mod;
        x=x*x%mod;
        n>>=1;
    }
    return res;
}
int main(){
    int n,m;
    cin>>m>>n;
    ll ans=mod_pow(m,n,mod);
    cout<<ans<<endl;
    return 0;
}