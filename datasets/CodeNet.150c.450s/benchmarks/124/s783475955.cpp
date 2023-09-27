#include<bits/stdc++.h>
using namespace std;
int n;
const int INF=123456789;
const int MAX=100;
int color[MAX];
const int BLACK=2;
const int WHITE=0;
const int GRAY=1;
int d[MAX],M[MAX][MAX];

void ds(){
  int minv,u;

  d[0]=0;color[0]=GRAY;
  while(1){
    minv=INF;u=-1;
    for(int i=0;i<n;i++){
      if(minv>d[i]&&color[i]!=BLACK){
        minv=d[i];
        u=i;
      }
    }

    if(u==-1) break;
    color[u]=BLACK;

    for(int i=0;i<n;i++){
      if(M[u][i]!=INF&&color[i]!=BLACK){
        if(d[i]>d[u]+M[u][i]){
          d[i]=d[u]+M[u][i];
          color[i]=GRAY;
        }
      }
    }
  }
}

int main(){
  int u,k,v,c;
  cin>>n;
  for(int i=0;i<n;i++){
    color[i]=WHITE; d[i]=INF;
    for(int j=0;j<n;j++){
      M[i][j]=INF;
    }
  }

  for(int i=0;i<n;i++){
    cin>>u>>k;
    for(int j=0;j<k;j++){
      cin>>v>>c;
      M[u][v]=c;
    }
  }

  ds();
  for(int i=0;i<n;i++){
  if(d[i]!=INF)  cout<<i<<" "<<d[i]<<endl;
  else cout<<i<<" "<<-1<<endl;
  }
  return 0;
}