#include <iostream>
using namespace std;
static const int MAX=100;
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;
static const int INF=1<<21;

int n;
int A[MAX][MAX];

int prim(){
  int i,color[MAX],d[MAX],p[MAX],mincost,k,sum;
  for(i=0;i<n;i++){
    color[i]=WHITE;
    d[i]=INF;
  }
  d[0]=0;
  p[0]=-1;

  while(1){
    mincost=INF;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	k=i;
      }
    }
    if(mincost==INF) break;
    color[k]=BLACK;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && A[k][i]!=INF){
	if(A[k][i]<d[i]){
	  d[i]=A[k][i];
	  p[i]=k;
	  color[i]=GRAY;
	}
      }
    }
  }
  sum=0;
  for(i=0;i<n;i++){
    if(p[i]!=-1){
      sum+=A[i][p[i]];
    }
  }
  return sum;
}

int main(){
  int i,j,a;
  cin>>n;

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      cin>>a;
      if(a!=-1){
	A[i][j]=a;
      }
      else A[i][j]=INF;
    }
  }

  cout<<prim()<<endl;

  return 0;
}

	
      