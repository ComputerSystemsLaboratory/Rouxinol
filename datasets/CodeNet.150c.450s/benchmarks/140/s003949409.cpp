#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FIR first
#define SEC second
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;

typedef int Weight;
struct Edge{
  int src;int dst;
  Weight wei;
  Edge(int s=0,int d=0,Weight w=0):
    src(s),dst(d),wei(w){}
};
using Graph = vector<vector<Edge>>;
int prim(const Graph &g,const int r=0){
  struct comp{
    bool operator()(const Edge &e,const Edge &f)const {return e.wei>f.wei;}
  };
  Weight sum=0;
  vector<int> used(g.size());
  priority_queue<Edge,vector<Edge>,comp> q;
  q.emplace(-1,r,0);
  while(q.size()){
    Edge e=q.top();
    q.pop();
    if(used[e.dst])continue;
    used[e.dst]=1;
    sum+=e.wei;
    for(auto &f : g[e.dst]){
      if(!used[f.dst])q.emplace(f);
    }
  }
  return sum;
}

signed main(){
  int v,e;
  cin>>v>>e;
  Graph g(v);
  REP(i,e){
    int s,t,w;
    cin>>s>>t>>w;
    g[s].emplace_back(s,t,w);
    g[t].emplace_back(t,s,w);
  }
  cout<<prim(g,0)<<endl;
  return 0;
}