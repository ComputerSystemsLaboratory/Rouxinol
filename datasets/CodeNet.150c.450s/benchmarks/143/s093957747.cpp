#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
using ll=long long;
int main()
{
    ll n;
    cin>>n;
    map<ll,ll> a;
    ll ans=0;
    rep(i,n){
        ll x;
        cin>>x;
        a[x]++;
        ans+=x;
    }
    ll q;
    cin>>q;
    rep(i,q){
        ll b,c;
        cin>>b>>c;
        ans+=(c-b)*a[b];
        a[c]+=a[b];
        a[b]=0;
        cout<<ans<<endl;
    }
}