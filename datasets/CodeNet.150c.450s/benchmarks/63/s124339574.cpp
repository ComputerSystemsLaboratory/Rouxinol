#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<string>
#include<cmath>
#include<cstdint>
//#include<>
using namespace std;
 
#define rep(i,j) for(int i=0;i<(int)(j);i++)
const int INF=1<<30;//=10E10
 
 
struct Edge{
  int to,cost;
  Edge(int to_,int cost_):to(to_),cost(cost_){;}
};
 
vector< vector<Edge> > G;//??\??¶??????????
 
 
//????????????????????????????????????´????????´??????????§??????
vector<int> BellmanFord(int start){
  vector<int> dist(G.size(),INF);
  dist[start]=0;
  rep(cnt,G.size()){
    bool update=false;
    rep(i,G.size()){
      for(Edge e : G[i]){
        if(dist[i]!=INF && dist[e.to]>dist[i]+e.cost){
          dist[e.to]=dist[i]+e.cost;
          update=true;
          if(cnt==(int)G.size()-1)return vector<int>(0);
        }
      }
    }
    if(!update)break;
  }
  return dist;
}
 
 
 
int main()
{
  int v,e,r;cin>>v>>e>>r;
  G.resize(v);
   
  rep(i,e){
    int s,t,d;cin>>s>>t>>d;
    G[s].push_back(Edge(t,d));
  }
   
  vector<int> dist=BellmanFord(r);
  if(dist.size()==0)cout<<"NEGATIVE CYCLE"<<endl;
  else{
    for(auto d : dist){
      if(d==INF)cout<<"INF"<<endl;
      else cout<<d<<endl;
    }
  }
  return 0;
}