#include<bits/stdc++.h>
using namespace std;

#define int long long

typedef pair<int,int>pint;
typedef vector<int>vint;
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back
const int INF=1001001001001001001ll;

struct edge{
    int to,cost;
    edge(int to,int cost):to(to),cost(cost){}
};

int N,M,r;
vector<edge>G[100000];
int dist[100000];

signed main(){
    scanf("%lld%lld%lld",&N,&M,&r);
    rep(i,M){
        int a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        G[a].pb(edge(b,c));
        //G[b].pb(edge(a,c));
    }

    fill_n(dist,N,INF);
    priority_queue<pint,vector<pint>,greater<pint> >que;
    que.push(pint(0,r));
    dist[r]=0;

    while(que.size()){
        pint p=que.top();que.pop();
        if(dist[p.second]<p.first)continue;
        rep(i,G[p.second].size()){
            edge &e=G[p.second][i];
            if(dist[e.to]<=p.first+e.cost)continue;
            dist[e.to]=p.first+e.cost;
            que.push(pint(dist[e.to],e.to));
        }
    }

    rep(i,N){
        if(dist[i]==INF)cout<<"INF"<<endl;
        else cout<<dist[i]<<endl;
    }

    return 0;
}