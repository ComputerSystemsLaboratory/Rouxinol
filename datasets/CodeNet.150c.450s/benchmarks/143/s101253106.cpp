#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll=long long;
constexpr ll mod=1000000007;
constexpr int inf=1000000000;
constexpr ll linf=1000000000000000000;

int main(){
    int n;
    cin>>n;
    int cnt[100001]={};
    ll ans=0;
    rep(i,n){
        int v;
        cin>>v;
        ++cnt[v];
        ans+=v;
    }
    int q;
    cin>>q;
    rep(i,q){
        ll b,c;
        cin>>b>>c;
        ans+=(c-b)*cnt[b];
        cout<<ans<<endl;
        cnt[c]+=cnt[b];
        cnt[b]=0;
    }
}
