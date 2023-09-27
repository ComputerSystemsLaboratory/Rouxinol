#include<iostream>
using namespace std;
static const int MAX=100;
static const int INF=(1<<21);
static const int APE=0;
static const int MID=1;
static const int BOT=2;

int n, M[MAX][MAX];

void dijkstra(){
  int mv, i, u, v;
  int d[MAX], c[MAX];

  for(i=0;i<n;i++){
    d[i]=INF;
    c[i]=APE;
  }

  d[0]=0;
  c[0]=MID;
  while(1){
    mv=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(mv>d[i]&&c[i]!=BOT){
        u=i;
        mv=d[i];
      }
    }
    if(u==-1)break;
    c[u]=BOT;
    for(v=0;v<n;v++){
      if(c[v]!=BOT&&M[u][v]!=INF){
        if(d[v]>d[u]+M[u][v]){
          d[v]=d[u]+M[u][v];
          c[v]=MID;
        }
      }
    }
  }
  for(i=0;i<n;i++){
    cout<<i<<" "<<(d[i]==INF ? -1 : d[i])<<endl;
  }
}

int main(){
  int i, j, k, c, u, v;

  cin>>n;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=INF;
    }
  }

  for(i=0;i<n;i++){
    cin>>u>>k;
    for(j=0;j<k;j++){
      cin>>v>>c;
      M[u][v]=c;
    }
  }
  dijkstra();

  return 0;
}
