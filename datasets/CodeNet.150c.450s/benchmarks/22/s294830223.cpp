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

typedef int64_t i64;typedef int32_t i32;
typedef int16_t i16;typedef int8_t i8;
typedef uint64_t ui64;typedef uint32_t ui32;
typedef uint16_t ui16;typedef uint8_t ui8;

typedef i32 int__;
#define rep(i,j) for(int__ i=0;i<j;i++)
#define repeat(i,j,k) for(int__ i=(j);i<(k);i++)
#define repeat_eq(i,j,k) for(int__ i=(j);i<=(k);i++)
#define all(v) begin(v),end(v)

const i32 INF=1<<30;//=10E10

class Path{

  public:
  struct Edge{i32 to,cost;Edge(i32 to_,i32 cost_):to(to_),cost(cost_){;}};


  vector< vector<Edge> > G;//接続リスト
  i32 V_num;
  i32 E_num;
  
  Path(i32 n){G.resize(n);V_num=n;E_num=0;}

  void add_arc(i32 x,i32 y,i32 c)
  {
    G[x].push_back(Edge(y,c));
    E_num+=1;
  }

  vector<i32> BellmanFord(i32 start){
    vector<i32> dist(V_num,INF);
    dist[start]=0;
    
    rep(cnt,V_num-1){
      bool update=false;
      rep(i,G.size()){
	rep(j,G[i].size()){
	  if(dist[i]!=INF && dist[G[i][j].to]>dist[i]+G[i][j].cost){
	    dist[G[i][j].to]=dist[i]+G[i][j].cost;
	    update=true;
	    if(cnt==V_num-2)return vector<i32>(0);
	  }
	}
      }
      if(!update)break;
    }
    return dist;
  }
};



int main()
{
  i32 v,e,r;cin>>v>>e>>r;
  Path Graph(v);
  rep(i,e){
    i32 s,t,d;cin>>s>>t>>d;
    Graph.add_arc(s,t,d);
  }
  vector<i32> dist=Graph.BellmanFord(r);
  if(dist.size()==0)cout<<"NEGATIVE CYCLE"<<endl;
  else{
    for(auto d : dist){
      if(d==INF)cout<<"INF"<<endl;
      else cout<<d<<endl;
    }
  }
  return 0;
}