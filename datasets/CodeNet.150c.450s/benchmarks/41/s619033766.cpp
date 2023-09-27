#include <iostream>
#include <limits.h>
#include <queue>
#define MAX_V 100
#define MAX_E 9900
#define INF INT_MAX
using namespace std;

class Edge{
public:
  int from,to,cost;
};
Edge G[MAX_E+1];
int d[MAX_V+1][MAX_V+1];

int V,E;

int solve(){

  for(int i=0;i<V;i++)
    for(int j=0;j<V;j++){
      d[i][j]=INF;
      if(i==j)d[i][j]=0;
    }
      
  
  int cycle=0;
  while(1){
    
    bool update=false;
    
    for(int i=0;i<V;i++){
      for(int j=0;j<E;j++){
	Edge e = G[j];
	if(d[i][e.from]!=INF && d[i][e.from]+e.cost < d[i][e.to]){
	  d[i][e.to]=d[i][e.from]+e.cost;
	  update = true;
	}
      }
    }
    if(!update) break;
    cycle++;
    if(cycle>=V) return -1;
  }
 
  return 1;
}


int main(){

  
  cin>>V>>E;
  
  for(int i=0;i<E;i++){
    int from,to,cost;
    cin>>from>>to>>cost;
    G[i].from=from;
    G[i].to=to;
    G[i].cost=cost;
  }
  int ret = solve();
  if(ret==-1) cout<<"NEGATIVE CYCLE"<<endl;
  else
    for(int i=0;i<V;i++){
      for(int j=0;j<V;j++){
	if(d[i][j]==INF) cout<<"INF";
	else cout<<d[i][j];
        if(j!=V-1) cout<<" ";
      }
      cout<<endl;
    }
  return 0;
}