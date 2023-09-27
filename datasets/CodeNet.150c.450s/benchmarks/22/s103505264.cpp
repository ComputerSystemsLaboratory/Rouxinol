#include <iostream>
#include <limits.h>
#include <queue>
#define MAX_V 1000
#define MAX_E 2000
#define INF INT_MAX
using namespace std;

class Edge{
public:
  int from,to,cost;
};
Edge G[MAX_E+1];
int d[MAX_V+1];

int V,E;

int solve(int r){

  fill(d,d+V,INF);
  d[r]=0;
  int cycle=0;
  while(1){
    
    bool update=false;
    
    for(int i=0;i<E;i++){
      Edge e = G[i];
      if(d[e.from]!=INF && d[e.from]+e.cost < d[e.to]){
	d[e.to]=d[e.from]+e.cost;
	update = true;
      }
    }
    if(!update) break;
    cycle++;
    if(cycle>=V) return -1;
  }
 
  return 1;
}


int main(){

  int r;
  cin>>V>>E>>r;
  
  for(int i=0;i<E;i++){
    int from,to,cost;
    cin>>from>>to>>cost;
    G[i].from=from;
    G[i].to=to;
    G[i].cost=cost;
  }
  int ret = solve(r);
  if(ret==-1) cout<<"NEGATIVE CYCLE"<<endl;
  else
    for(int i=0;i<V;i++){
      if(d[i]==INF) cout<<"INF"<<endl;
      else cout<<d[i]<<endl;
    }
  return 0;
}