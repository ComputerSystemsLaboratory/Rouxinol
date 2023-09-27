#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define MAX 100005
#define int long long
using namespace std;

const int MOD=1000000007;
const int INF=1000000009;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};


struct Edge{
  int src;int dst;int wei;
  Edge(int s=0,int d=0,int w=0):src(s),dst(d),wei(w){}
};
using Graph = vector<vector<Edge>>;
vector<int> Dij(Graph&g,int s){
    using state = pair<int,int>;//???????????????????????????????????????????????????
    priority_queue<state,vector<state>,greater<state>> pq;
    vector<int> dis(g.size(),INF);
    dis[s]=0;
    pq.push(state(0,s));
    while(!pq.empty()){
      int d=pq.top().first;
      int v=pq.top().second;
      pq.pop();
      if(dis[v]<d)continue;
      rep(i,g[v].size()){
        Edge &e=g[v][i];
        if(dis[e.dst]>dis[v]+e.wei){
          dis[e.dst]=dis[v]+e.wei;
          pq.push(state(dis[e.dst],e.dst));
        }
      }
    }
    return dis;
}

signed main(){
  int v,e,r;
  cin>>v>>e>>r;
  Graph g(v);
  rep(i,e){
    int s,t,d;
    cin>>s>>t>>d;
    g[s].pb(Edge(s,t,d));
  }
  vector<int> dist=Dij(g,r);

  rep(i,v){
    if(dist[i]==INF)cout<<"INF"<<endl;
    else cout<<dist[i]<<endl;
  }

  return 0;
}