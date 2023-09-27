#include <bits/stdc++.h>
#define INF 1e9
using namespace std;
int n,mp[101][101],D[101];

void dijkstra(){
  bool used[101]={};
  for(int i=0;i<101;i++)D[i]=INF;
  D[0]=0;

  while(1){
    int cost=INF,pos=-1;
    for(int i=0;i<n;i++) if(!used[i]&&D[i]<cost) pos=i,cost=D[i];
    if(pos==-1)return ;
    used[pos]=1;    
    for(int i=0;i<n;i++)D[i]=min(D[i],cost+mp[pos][i]);
  }
}


int main(){

  cin>>n;
  for(int i=0;i<101;i++)
    for(int j=0;j<101;j++) mp[i][j]=INF;
  
  for(int i=0,a,m;i<n;i++){
    cin>>a>>m;
    for(int j=0,b,c;j<m;j++)cin>>b>>c,mp[a][b]=c;
  }
  dijkstra();
  for(int i=0;i<n;i++)cout <<i<<" "<<D[i]<<endl;
  
  return 0;
}