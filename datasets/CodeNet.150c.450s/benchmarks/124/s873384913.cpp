#include <iostream>
using namespace std;
static const int MAX=100;
static const int INF=1<<21;
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;

int n,A[MAX][MAX];

void dijkstra(){
  int color[MAX],mincost,k,p[MAX],d[MAX];

  for(int i=0;i<n;i++){
    color[i]=WHITE;
    d[i]=INF;
  }
  d[0]=0;
  p[0]=-1;
  color[0]=GRAY;

  while(1){
    mincost=INF;
    for(int i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	k=i;
      }
    }
    if(mincost==INF) break;
    color[k]=BLACK;

    for(int i=0;i<n;i++){
      if(color[i]!=BLACK && A[k][i]!=INF){
	if(d[k]+A[k][i]<d[i]){
	  d[i]=d[k]+A[k][i];
	  p[i]=k;
	  color[i]=GRAY;
	}
      }
    }
  }
  for(int i=0;i<n;i++){
    cout<<i<<" "<<(d[i]==INF ? -1:d[i])<<endl;
  }
}


int main(){
  int i,j,k,c,u,v;
  cin>>n;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=INF;
    }
  }
  for(i=0;i<n;i++){
    cin>>u>>k;
    for(j=0;j<k;j++){
      cin>>v>>c;
      A[u][v]=c;
    }
  }

  dijkstra();
}