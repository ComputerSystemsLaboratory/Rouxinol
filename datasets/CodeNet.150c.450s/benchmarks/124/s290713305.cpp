#include<bits/stdc++.h>
using namespace std;

const int INF=10000002ll;

int n,m[100][100];

void dijkstra();

int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      m[i][j]=INF;
    }
  }
  
  int k,c,u,v;
  for(int i=0;i<n;i++){
    cin>>u>>k;
    for(int j=0;j<k;j++){
      cin>>v>>c;
      m[u][v]=c;
    }
  }

  dijkstra();

  return(0);
}

void dijkstra(){
  int mn,d[100],sn[100];
  
  for(int i=0;i<n;i++){
    d[i]=INF;
    sn[i]=0;
  }

  d[0]=0;
  while(1){
    mn=INF;
    int u=-1;
    for(int i=0;i<n;i++){
      if(mn>d[i] && sn[i]==0){
	u=i;
	mn=d[i];
      }
    }
    if(u==-1)break;
    sn[u]=1;
    for(int i=0;i<n;i++){
      if(sn[i]==0 && m[u][i]!=INF){
	if(d[i]>d[u]+m[u][i]){
	  d[i]=d[u]+m[u][i];
	}
      }
    }
  }

  int ans;
  for(int i=0;i<n;i++){
    cout<<i<<" ";
    if(d[i]==INF)cout<<"-1"<<endl;
    else cout<<d[i]<<endl;
  }
}