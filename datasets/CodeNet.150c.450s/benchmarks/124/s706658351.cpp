#include <iostream>
#define N 100
#define INFINITY 2000000000
using namespace std;
int n,k,u,v,c,M[N][N],d[N],p[N],mincost,i,j;
string color[N];
void dijkstra(void);
int main(){
  cin >> n;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=-1;
    }
  }
  for(i=0;i<n;i++){
    cin >> u;
    cin >> k;
    for(j=0;j<k;j++){
      cin >> v >> c;
      M[u][v]=c;
    }
  }
  dijkstra();
  return 0;
}
void dijkstra(){
  for(i=0;i<n;i++) color[i]="WHITE",d[i]=INFINITY;
  d[0]=0;
  p[0]=-1;
  while(1){
    mincost=INFINITY;
    for(i=0;i<n;i++){
      if(color[i]!="BLACK"&&d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==INFINITY) break;
    color[u]="BLACK";
    for(i=0;i<n;i++){
      if(color[i]!="BLACK"&&M[u][i]!=-1){
	if(d[u]+M[u][i]<d[i]){
	  d[i]=d[u]+M[u][i];
	  p[i]=u;
	  color[i]="GLAY";
	}
      }
    }
  }
  for(i=0;i<n;i++) cout << i << ' ' << d[i] << endl;
}