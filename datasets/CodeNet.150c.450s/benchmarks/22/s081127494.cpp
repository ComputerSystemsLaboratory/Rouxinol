#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i=0; i<n; i++)
#define INF 1000000000

struct edge{
  int to, cost;
  edge(int to, int cost):
    to(to), cost(cost){}
};
struct vertex{
  vector<edge> V;
};

vertex G[1000];
int ne, nv, r;
int d[1000];

bool bellman(int s){
  fill(d, d+nv, INF);
  d[s]=0;
  rep(p, nv){
    bool update=false;
    rep(i, nv){
      rep(j, G[i].V.size()){
	edge e=G[i].V[j];
	if(d[i]!=INF && d[i]+e.cost<d[e.to]){
	  d[e.to]=d[i]+e.cost;
	  update=true;
	}
      }
    }
    if(!update)break;
    if(p==nv-1)return false;//?????????
  }
  return true;
}

int main(){
  cin>>nv>>ne>>r;
  rep(i, ne){
    int s, t, d;
    cin>>s>>t>>d;
    G[s].V.push_back(edge(t, d));
  }
  if(bellman(r)){
    rep(i, nv)
      if(d[i]==INF)cout<<"INF"<<endl;
      else cout<<d[i]<<endl;
  }
  else{
    cout<<"NEGATIVE CYCLE"<<endl;
  }
  return 0;
}