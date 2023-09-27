#include<bits/stdc++.h>
using namespace std;
#define MAX_V 100
#define MAX_E 10000
#define INF 2000000001
struct edge{int from,to,cost;};

edge es[MAX_E]; //辺
int ds[MAX_V]; //最短距離
int V,E; //頂点数、辺数
int d[MAX_V][MAX_V]; //d[u][v]はe=(u,v)のコスト(存在しなければINF、d[i][i]は0)

void warshall_floyd(){
  for(int k=0;k<V;k++)
    for(int i=0;i<V;i++)
      for(int j=0;j<V;j++){
	if(d[i][k]!=INF&&d[k][j]!=INF)
	  d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
      }
}

bool find_negative_loop(){
  memset(ds,0,sizeof(ds));
  for(int i=0;i<V;i++){
    for(int j=0;j<E;j++){
      edge e=es[j];
      if(ds[e.to]>ds[e.from]+e.cost){
	ds[e.to]=ds[e.from]+e.cost;
	if(i==V-1)return true;
      }
    }
  }  
  return false;
}

int main(){
  cin>>V>>E;
  for(int i=0;i<V;i++)
    for(int j=0;j<V;j++){
      if(i==j)d[i][j]=0;
      else d[i][j]=INF;
    }
  for(int i=0;i<E;i++){
    cin>>es[i].from>>es[i].to>>es[i].cost;
    d[es[i].from][es[i].to]=es[i].cost;
  }
  if(find_negative_loop())cout<<"NEGATIVE CYCLE"<<endl;
  else {
    warshall_floyd();
    for(int i=0;i<V;i++){
       for(int j=0;j<V;j++){
	 if(j)cout<<" ";
	 if(d[i][j]==INF)cout<<"INF";
	 else cout<<d[i][j];
       }
       cout<<endl;
    }
  }
  return 0;
}

