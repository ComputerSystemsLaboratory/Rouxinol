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
    ll v,e,r; cin>>v>>e>>r;
    vector<vector<P>> edges(v);
    rep(i,e){
        ll s,t,d;
        cin>>s>>t>>d;
        edges[s].push_back({d,t});
    }

    vector<ll> dist(v,INF);
    
    priority_queue<P,vector<P>,greater<P>> q;
    q.push({0,r});
    while(!q.empty()){
        P tmp=q.top();
        ll d=tmp.first,t=tmp.second;
        q.pop();
        if(d < dist[t]){
            dist[t] = d;
            for(auto x:edges[t]){
                ll l=x.first,u=x.second;
                if(dist[u] > d+l) q.push({d+l,u});
            }
        }
    }
    
    for(auto d:dist){
        if(d==INF) cout<<"INF"<<endl;
        else cout<<d<<endl;
    }
    return 0;
}
