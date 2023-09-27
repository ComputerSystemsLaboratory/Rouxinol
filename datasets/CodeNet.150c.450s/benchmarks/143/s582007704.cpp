#include <bits/stdc++.h>
#define rep(i, n)	for(ll i=0;i<(ll)(n);i++)
using namespace std;
using ll=long long;

int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> cnt(100010);
    ll ans=0;
    ll b[100010],c[100010];
    ll q;
    rep(i, n) {
        cin>>a[i];
        ans+=a[i];
        a[i]--;
        cnt[a[i]]++;
    }
    cin>>q;
    rep(i, q) cin>>b[i]>>c[i];

    rep(i, q){
        ans += (c[i]-b[i])*cnt[b[i]-1];
        cnt[c[i]-1]+=cnt[b[i]-1];
        cnt[b[i]-1]=0;
        cout<<ans<<endl;
    }
}