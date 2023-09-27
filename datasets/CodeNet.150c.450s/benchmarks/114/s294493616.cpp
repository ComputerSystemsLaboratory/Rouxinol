#include <iostream>
#define N 100
#define INFINITY 2000000000
using namespace std;
void prim();
int M[N][N],d[N],p[N],u,n,mincost,i,j;
string color[N];
int main(){
  cin >> n;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      cin >> M[i][j];
    }
  }
  prim();
  return 0;
}
void prim(){
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
	if(M[u][i]<d[i]){
	  d[i]=M[u][i];
	  p[i]=u;
	  color[i]="GLAY";
	}
      }
    }
  }
  int sum=0;
  for(i=0;i<n;i++) sum+=d[i];
  cout << sum << endl;
}