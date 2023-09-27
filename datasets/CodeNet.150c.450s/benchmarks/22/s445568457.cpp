#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i,n) for(long long i = 0; i < (n); ++i)
#define ll long long
#define P pair<ll,ll>
#define all(v) (v).begin(),(v).end()

const ll mod = 1e9+7;
const ll INF = 1e18;
const double pi = acos(-1.0);

int main(void)
{
    struct edge{
        ll from;
        ll to;
        ll cost;
    };

    ll v,e,r;
    cin>>v>>e>>r;
    vector<edge> E(e);
    rep(i,e){
        ll s,t,d;
        cin>>s>>t>>d;
        E[i]={s,t,d};
    }

    vector<ll> dist(v,INF);
    dist[r]=0;
    rep(i,v){
        bool update=false;
        for(auto x:E){
            if(dist[x.from] != INF && dist[x.from]+x.cost < dist[x.to]){
                if(i==v-1){
                    cout<<"NEGATIVE CYCLE"<<endl;
                    return 0;
                }
                dist[x.to] = dist[x.from]+x.cost;
                update=true;
            }
        }
        if(!update) break;
    }
    rep(i,v){
        if(dist[i]==INF) cout<<"INF"<<endl;
        else cout<<dist[i]<<endl;
    }
    return 0;
}
