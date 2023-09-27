#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,x,n) for(int i=(x);i<(n);i++)
#define all(v) (v).begin(),(v).end()
//#define int long long
using namespace std;
const int MOD=1e9+7;
const int INF=1e9;
template<typename T> void cmax(T &a, T b) {a = max(a, b);}
template<typename T> void cmin(T &a, T b) {a = min(a, b);}

using Weight=int;
struct Edge{
  int src,dst;
  Weight weight;
  Edge():src(0),dst(0),weight(0){}
  Edge(int s,int d,Weight w=0):src(s),dst(d),weight(w){}
};
using Edges=vector<Edge>;
using Graph=vector<Edges>;
const Weight inf=numeric_limits<Weight>::max()/8;
pair<vector<Weight>,bool> BellmanFord(const Graph&g,int src){
  int n=g.size();

  Edges es;
  for(int i=0;i<n;i++){
    for(auto &e:g[i])es.emplace_back(e);
  }
  vector<Weight> dis(n,inf);
  dis[src]=0;
  bool Negative_cycle=false;
  for(int i=0;;i++){
    bool update=false;
    for(auto&e:es){
      if(dis[e.src]!=inf&&dis[e.dst]>dis[e.src]+e.weight){
        dis[e.dst]=dis[e.src]+e.weight;
        update=true;
      }
    }
    if(!update)break;
    if(i>n){
      Negative_cycle=true;
      break;
    }
  }
  return {dis,Negative_cycle};
}

int main(){
  int V,E,r;
  cin>>V>>E>>r;
  Graph g(V);
  rep(i,E){
    int s,t,d;
    cin>>s>>t>>d;
    g[s].emplace_back(s,t,d);
  }
  pair<vector<int>,bool> ans=BellmanFord(g,r);
  if(ans.second){
    cout<<"NEGATIVE CYCLE"<<endl;
    return 0;
  }
  rep(i,V){
    if(ans.first[i]==inf){
      cout<<"INF"<<endl;
    }else{
      cout<<ans.first[i]<<endl;
    }
  }


 return 0;
}

