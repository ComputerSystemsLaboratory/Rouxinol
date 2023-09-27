#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define MOD 1000000007
const int INF = 1LL<<30;

int main(){
    int n;
    cin>>n;
    map<ll,ll> m;
    ll ans=0;
    rep(i,n){
        ll a;
        cin>>a;
        ans+=a;
        m[a]++;
    }

    int q;
    cin>>q;
    rep(i,q){
        ll b,c;
        cin>>b>>c;
        ans+=(c-b)*m[b];
        m[c]+=m[b];
        m[b]=0;
        cout<<ans<<endl;
    }

}