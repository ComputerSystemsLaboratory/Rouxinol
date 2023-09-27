#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

#define INF 10000000
#define MAX_V 1000

int V,E;
struct edge{int from,to,cost;};
vector<edge> edges;
int d[MAX_V];
int main(){
  int f,t,c;
  int s;
  scanf("%d %d %d",&V,&E,&s);
  for(int i=0;i<E;i++){
    scanf("%d %d %d",&f,&t,&c);
    edge es;
    es.from=f;es.to=t;es.cost=c;
    edges.push_back(es);
  }
  fill(d,d+V,INF);
  d[s]=0;
  for(int i=0;i<V;i++){
   
    for(int j=0;j<E;j++){
      edge e=edges[j];
      if(d[e.from]!=INF && d[e.to] > d[e.from]+e.cost){
	d[e.to]=d[e.from]+e.cost;
	if(i==V-1){
	  printf("NEGATIVE CYCLE\n");
	  return 0;
	}
      }
    }
  }
  for(int x=0;x<V;x++){
    if(d[x]!=INF) printf("%d\n",d[x]);
    else printf("INF\n");
  }
  return 0;
}