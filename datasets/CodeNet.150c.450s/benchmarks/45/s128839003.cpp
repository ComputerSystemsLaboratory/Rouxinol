#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef long long ll;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
#define MAX_V 100001
#define MOD 1000000007

ll RepeatSquaring(ll n,ll p, ll mod){
    if(p==0) return 1;
    if(p%2==0){
        ll t=RepeatSquaring(n,p/2,mod);
        t%=mod;
        return t*t%mod;
    }
    return n*RepeatSquaring(n,p-1,mod);
}

int main(){
    ll m,n;cin>>m>>n;
    ll ans=RepeatSquaring(m,n,MOD);
    cout<<ans%MOD<<endl;
}
