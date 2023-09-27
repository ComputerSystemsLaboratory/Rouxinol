#include<iostream>
#include<cstdio>
#define INF 1<<30
#define FinishFunction return 0
#define MAX 1000000
using namespace std;
  
  
struct edge {
  int from,to,cost,k;
};
  
edge es[MAX];
  
  
  
int main(){
  int n,u,k,E,c,v;
  E = 0;
  scanf("%d",&n);
  
  for(int i=0;i<n;i++){
    scanf("%d %d",&u,&k);
     
    for(int j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      es[E].from = u;
      es[E].to = v;
      es[E++].cost = c;
    }
  }
  
    
  int d[MAX];
  for(int i=0;i<n;i++)d[i] = INF;
  d[0] = 0;
  while(true){
    bool update = false;
    for(int i=0;i<E;i++){
      edge e = es[i];
      if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
    d[e.to] = d[e.from] + e.cost;
    update = true;
      }
    }
    if(!update)break;
  
  
  }
  
  for(int i=0;i<n;i++)cout << i << " " << d[i] << endl;
  
  FinishFunction;
}