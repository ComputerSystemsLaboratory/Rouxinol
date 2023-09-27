#include <iostream>
using namespace std;

static const int MAX=100;
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;
static const int INF=(1<<21);

int n,M[MAX][MAX];

void dig(){
  int color[MAX],d[MAX];
  for(int i=0;i<n;i++){
    color[i]=WHITE;
    d[i]=INF;
  }


d[0]=0;
color[0]=GRAY;

int minc,u;
while(1){
  minc=INF;
  u=-1;
  for(int i=0;i<n;i++){
    if(color[i]!=BLACK&&minc>d[i]){
      minc=d[i];
      u=i;
    }
  }
if(u==-1) break;
  color[u]=BLACK;

  for(int v=0;v<n;v++){
    if(M[u][v]!=INF&&color[v]!=BLACK){
      if(d[v]>d[u]+M[u][v]){
        d[v]=d[u]+M[u][v];
        color[v]=GRAY;
      }
    }
  }
 }

 for(int i=0;i<n;i++){
   cout<<i<<" "<<(d[i]==INF?-1:d[i])<<endl;
 }
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      M[i][j]=INF;
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

  dig();
  return 0;
}