#include<iostream>
using namespace std;
static const int MAX=100;
static const int INF=(1<<21);
static const int WHI=0;
static const int GRA=1;
static const int BLA=2;
int n,m[MAX][MAX];
int prim(){
  int u,minv;
  int d[MAX],p[MAX],color[MAX];
  for(int i=0;i<n;++i){
    d[i]=INF;
    p[i]=-1;
    color[i]=WHI;
  }
  d[0]=0;
  while(114514){
    minv=INF;
    u=-1;
    for(int i=0;i<n;++i){
      if(minv>d[i] && color[i]!=BLA){
	u=i;
	minv=d[i];
      }
    }
    if(u==-1) break;
    color[u]=BLA;
    for(int v=0;v<n;++v){
      if(color[v]!=BLA && m[u][v]!=INF){
	if(d[v]>m[u][v]){
	  d[v]=m[u][v];
	  p[v]=u;
	  color[v]=GRA;
	}
      }
    }
  }
  int sum=0;
  for(int i=0;i<n;++i){
    if(p[i]!=-1) sum+=m[i][p[i]];
  }
  return sum;
}

int main(){
  cin>>n;
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      int e;
      cin>>e;
      m[i][j]=(e==-1)?INF:e;
    }
  }
  cout<<prim()<<endl;
  return 0;
}

