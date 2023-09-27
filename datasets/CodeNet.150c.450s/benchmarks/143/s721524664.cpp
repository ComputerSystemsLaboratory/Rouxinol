#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define MOD 1000000007
const int INF = 1LL<<30;

ll cnt[100010];
 
int main(){
    int n;
    cin>>n;

    ll ans=0;
    rep(i,n){
        ll a;
        cin>>a;
        cnt[a]++;
        ans+=a;
    }

    int q;
    cin>>q;
    while(q--){
        ll b,c;
        cin>>b>>c;
        ans-=b*cnt[b];
        ans+=c*cnt[b];
        cnt[c]+=cnt[b];
        cnt[b]=0;
        cout<<ans<<endl;
    }
}