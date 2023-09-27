#include<iostream>
#include<climits>
using namespace std;

static const int MAX=100;
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;

int n,M[MAX][MAX];

void dijkstra(){
  int mincost;
  int d[MAX],color[MAX];

  for(int i=0;i<n;i++){
    d[i]=INT_MAX;
    color[i]=WHITE;
  }

  d[0]=0;
  color[0]=GRAY;
  
  while(1){
    int u=-1;  
    mincost=INT_MAX;

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
	if(d[u]+M[u][i]<d[i]){
	  d[i]=d[u]+M[u][i];
	  color[i]=GRAY;
	}
      }
    }
  }
  for(int i=0;i<n;i++) cout<<i<<" "<<d[i]<<endl;
}

int main(){
  cin>>n;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      M[i][j]=INT_MAX;
    }
  } 

  int u,k,v,c;
  for(int i=0;i<n;i++){
    cin>>u>>k;
    for(int j=0;j<k;j++){
      cin>>v>>c;
      M[u][v]=c;
    }
  }

  dijkstra();

 return 0;
}