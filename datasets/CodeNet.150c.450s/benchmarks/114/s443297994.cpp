#include<bits/stdc++.h>
using namespace std;
const int MAX=100;
const int INF=(1<<21);
const int W=0;
const int G=1;
const int B=2;
int n,m[MAX][MAX];
int prim(){
  int u,minv;
  int d[MAX],p[MAX],color[MAX];
  for(int i=0;i<n;i++){
    d[i]=INF;
    p[i]=-1;
    color[i]=W;
  }
  d[0]=0;
  while(1){
    minv=INF;
    u=-1;
    for(int i=0;i<n;i++){
      if(minv>d[i] && color[i]!=B){
	u=i;
	minv=d[i];
      }
    }
    if(u==-1) break;
    color[u]=B;
    for(int v=0;v<n;v++){
      if(color[v]!=B && m[u][v]!=INF){
	if(d[v]>m[u][v]){
	  d[v]=m[u][v];
	  p[v]=u;
	  color[v]=G;
	}
      }
    }
  }
  int sum=0;
  for(int i=0;i<n;i++){
    if(p[i]!=-1) sum+=m[i][p[i]];
  }
  return sum;
}

int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      int e;
      scanf("%d",&e);
      m[i][j]=(e==-1)?INF:e;
    }
  }
  printf("%d\n",prim());
  return 0;
}
  
