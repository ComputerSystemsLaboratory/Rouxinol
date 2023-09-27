#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n;i++)
using namespace std;
using ll = long long;
#define int ll

signed  main(){
    using pii =pair<int,int>;
    using piii=pair<pii,int>;
    int v,e,s; cin>>v>>e>>s;
    vector<int>d(v,LLONG_MAX);
    vector<piii>edge;
    rep(i,e){
        int from,to,cost; cin>>from>>to>>cost;
        edge.push_back(piii(pii(from,to),cost));
    }
    d[s]=0;
    rep(i,v){
        bool update=false;
        rep(j,edge.size()){
            int to=edge[j].first.second;
            int from=edge[j].first.first;
            int cost=edge[j].second;
            if(d[from]==LLONG_MAX)continue;
            if(d[to]>d[from]+cost){
                d[to]=d[from]+cost;
                update=true;
            }
        }
        if(i==v-1&&update)return puts("NEGATIVE CYCLE")*0;
    }
    rep(i,v)if(d[i]!=LLONG_MAX)cout<<d[i]<<endl; else cout<<"INF"<<endl;
}