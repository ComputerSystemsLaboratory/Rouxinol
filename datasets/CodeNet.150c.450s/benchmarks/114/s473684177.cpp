#include<iostream>
#include<climits>
using namespace std;

static const int MAX=100;
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;

int n,M[MAX][MAX];

int prime(){
  int u,mincost;
  int d[MAX],p[MAX],color[MAX];

  for(int i=0;i<n;i++){
    d[i]=INT_MAX;
    p[i]=-1;
    color[i]=WHITE;
  }

  d[0]=0;

  while(1){
    mincost=INT_MAX;
    u=-1;
    for(int i=0;i<n;i++){
      if(color[i]!=BLACK&&d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
 
    if(mincost==INT_MAX) break;
    
    color[u]=BLACK;

    for(int i=0;i<n;i++){
      if(color[i]!=BLACK&&M[u][i]!=INT_MAX){
	if(M[u][i]<d[i]){
	  d[i]=M[u][i];
	  p[i]=u;
	  color[i]=GRAY;
	}
      }
    }
  }

  int sum=0;
  for(int i=0;i<n;i++) sum+=d[i];

  return sum;
}

int main(){
  cin>>n;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      int e;
      cin>>e;
      if(e==-1) M[i][j]=INT_MAX;
      else M[i][j]=e;
    }
  }
  cout<<prime()<<endl; 
  return 0;
}