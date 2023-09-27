#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<string>
#include<cmath>
//#include<>
using namespace std;

typedef long long ll;
#define rep(i,j) for(i=0;i<j;i++)
#define rev_rep(i,j) for(i=j;i>=0;i—-)

int INF=1<<30;

class Path{
public:
  struct Edge{
    int to,cost;
    Edge(int to_,int cost_):to(to_),cost(cost_){;}
  };
  
  vector< vector<Edge> > G;//接続リスト

  Path(int n){
    G.resize(n);
  }
  
  void add_arc(int x,int y,int c)
  {
    G[x].push_back(Edge(y,c));
  }

  struct state{
    int index;
    int cost;
    state(int i,int c):index(i),cost(c){;}
    bool operator<(const state &r)const{return cost<r.cost;}
    bool operator>(const state &r)const{return cost>r.cost;}
  };
  vector<int> dijkstra(int start){
    priority_queue< state ,vector<state>,greater<state> > que;//(sからの距離,インデックス)
    
    vector<int>norm;
    norm.resize(G.size(),INF);
    que.push(state(start,0));
    
    while(!que.empty()){
      state now=que.top();que.pop();
      if(norm[now.index]!=INF)continue;
      norm[now.index]=now.cost;

      for(Edge e : G[now.index]){
	que.push(state(e.to,now.cost+e.cost));
      }
      
    }
    return norm;
  }
  
};

int main()
{
  int n,m,r;
  cin>>n>>m>>r;
  Path map(n);
  int i;
  rep(i,m)
    {
      int a,b,c;
      cin>>a>>b>>c;
      map.add_arc(a,b,c);
      //map.add_arc(b,a,c);
          
    }
  vector<int> ans=map.dijkstra(r);
  rep(i,ans.size())
    if(ans[i]==INF)
      cout<<"INF"<<endl;
    else
      cout<<ans[i]<<endl;
  return 0;
}