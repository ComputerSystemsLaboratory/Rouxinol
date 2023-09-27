#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<ll,ll> P;
const ll MOD=1000000007LL;
const double INF=1000000000;
const int MAX=100001;
int main(){
    ll n,m;
    while(cin>>n>>m,n+m){
    vector<P> v;
    ll ans=0;
    for(int i=0;i<n;i++){
        int d,p;cin>>d>>p;
        ans+=p*d;
        v.push_back(P(p,d));
    }
    sort(all(v),greater<P>());
    int idx=0;
    while(m){
        ans-=v[idx].first*min(m,v[idx].second);
        m-=v[idx].second;
        if(m<=0){
            break;
        }
        idx++;
        if(idx==n){
            break;
        }
    }
    cout<<ans<<endl;
    }

    return 0;
}

                           

