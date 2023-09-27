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

const i64 INF=1L<<62;//=10E10

class Path{

  public:
  struct Edge{i64 to,cost;Edge(i64 to_,i64 cost_):to(to_),cost(cost_){;}};


  vector< vector<i64> > G;//隣接行列
  i64 V_num;
  
  Path(i64 n){G.resize(n,vector<i64>(n,INF));V_num=n;}

  void add_arc(i64 x,i64 y,i64 c)
  {
    G[x][y]=c;
  }

  vector< vector<i64> > WarshallFloyd(){
    int V=G.size();

    vector< vector<i64> > &dist=G;
    
    rep(i,V)dist[i][i]=0;

    rep(k,V)rep(i,V)rep(j,V){
      if(G[i][k]!=INF && G[k][j]!=INF)
	dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
    }
    //negative loop check
    rep(i,V)if(dist[i][i]<0)return vector<vector<i64> >(0);
    return dist;
  }
  
};



int main()
{
  i64 v,e;cin>>v>>e;
  Path Graph(v);
  rep(i,e){
    i64 s,t,d;cin>>s>>t>>d;
    Graph.add_arc(s,t,d);
    //Graph.add_arc(t,s,d);
  }
  vector<vector<i64> > dist=Graph.WarshallFloyd();
  if(dist.size()==0)cout<<"NEGATIVE CYCLE"<<endl;
  else{
    rep(i,v){
      rep(j,v){
	if(dist[i][j]==INF)cout<<"INF";
	else cout<<dist[i][j];

	if(j!=v-1)cout<<" ";
      }
      cout<<endl;
    }
  }

  return 0;
}