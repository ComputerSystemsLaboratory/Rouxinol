#include<bits/stdc++.h>
using namespace std;
#define MAX_V 1111
#define MAX_E 2222
#define INF 1111111111
struct edge{int from,to,cost;};

edge es[MAX_E]; //辺
int d[MAX_V]; //最短距離
int V,E; //頂点数、辺数

//最短距離を求める
int shortest_path(int s){
  fill(d,d+V,INF);
  d[s]=0;
  int cnt=0;
  while(1){
    bool update=false;
    for(int i=0;i<E;i++){
      edge e=es[i];
      if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost){
	d[e.to]=d[e.from]+e.cost;
	update=true;
      }
    }
    if(!update)break;
    cnt++;
    if(cnt==V)return 0;
  }
  return 1;
}

int main(){
  int r;
  cin>>V>>E>>r;
  for(int i=0;i<E;i++)
    cin>>es[i].from>>es[i].to>>es[i].cost;
  if(shortest_path(r)){
    for(int i=0;i<V;i++){
      if(d[i]==INF)cout<<"INF"<<endl;
      else cout<<d[i]<<endl;
    }
  }else cout<<"NEGATIVE CYCLE"<<endl;
  return 0;
}

