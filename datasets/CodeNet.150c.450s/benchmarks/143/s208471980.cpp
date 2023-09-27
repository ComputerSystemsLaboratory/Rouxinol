#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1000000007;
#define INF 1LL<<30
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()

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
        ans+=m[b]*(c-b);
        m[c]+=m[b];
        m[b]=0;
        cout<<ans<<endl;
    }
}

