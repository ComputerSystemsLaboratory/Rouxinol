#include<bits/stdc++.h>
using namespace std;
const int MAX=100;
const int INF=(1<<21);
const int WHI=0;
const int GRA=1;
const int BLA=2;

int n,M[MAX][MAX];

int prim(){
  int u,minv;
  int d[MAX],p[MAX],color[MAX];

  for(int i=0;i<n;i++){
    d[i]=INF;
    p[i]=-1;
    color[i]=WHI;
  }

  d[0]=0;
  while(1){
    minv=INF;
    u=-1;

    for(int i=0;i<n;i++){
      if(minv>d[i] && color[i]!=BLA){
	u=i;
	minv=d[i];
      }
    }

    if(u==-1){
      break;
    }

    color[u]=BLA;//ここで訪問に記録

    for(int v=0;v<n;v++){
      if(color[v]!=BLA && M[u][v]!=INF){//まだ行くところがある && u,vに辺が通っている
	if(M[u][v]<d[v]){
	  d[v]=M[u][v];
	  p[v]=u;
	  color[v]=GRA;
	}
      }
    }
  }
  int sum=0;
  for(int i=0;i<n;i++){
    if(p[i]!=-1){
      sum+=M[i][p[i]];
    }
  }
  return sum;
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      int e;
      cin>>e;
      if(e==-1){
	M[i][j]=INF;
      }else{
	M[i][j]=e;
      }
    }
  }
  cout<<prim()<<endl;

  return 0;
}

