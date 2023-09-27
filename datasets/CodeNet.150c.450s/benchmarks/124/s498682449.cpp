#include<iostream>
#define INF 100000000
#define N 101
#define W 0
#define G 1
#define B 2
using namespace std;
int n,M[N][N],d[N];
void dijkstra(int s){
  int color[N],mincost,p[N],u;
  for(int i=0;i<n;i++) color[i]=W,d[i]=INF;
  d[s]=0;
  p[s]=-1;

  while(1){
    mincost=INF;
     u=-1;    
    for(int i=0;i<n;i++)
      if(color[i]!=B && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
        if(mincost==INF) break;
        color[u]=B;
    for(int i=0;i<n;i++)
      if(color[i]!=B && M[u][i]!=INF)
	if(d[u]+M[u][i]<d[i]){
	  d[i]=d[u]+M[u][i];
	  p[i]=u;
	  color[i]=G;
	}
  }
}
int main(){
  int u,k,c,v;
  cin>>n;
  for(int i=0;i<N;i++) for(int j=0;j<N;j++)M[i][j]=INF;
  for(int i=0;i<n;i++){
    cin>>u>>k;
    for(int j=0;j<k;j++){
      cin>>v>>c;
    M[u][v]=c;
    }
  }
  dijkstra(0);
  for(int i=0;i<n;i++) cout<<i<<" "<<d[i]<<endl;
  return 0;
}