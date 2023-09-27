#include<bits/stdc++.h>
using namespace std;
#define int long long
int e[111][111],d[111],used[111];
signed main(){
  int n;
  cin>>n;
  int INF=1LL<<55LL;
  fill((int*)e,(int*)(e+111),INF);
  for(int i=0;i<n;i++){
    int u,k;
    cin>>u>>k;
    for(int j=0;j<k;j++){
      int v,c;
      cin>>v>>c;
      e[u][v]=min(e[u][v],c);
    }
  }
  memset(used,0,sizeof(used));
  for(int i=0;i<n;i++)d[i]=INF;
  d[0]=0;
  while(1){
    int u=-1;
    for(int i=0;i<n;i++){
      if(used[i])continue;
      if(d[i]==INF)continue;
      if(u<0||d[i]<d[u])u=i;
    }
    if(u<0)break;
    used[u]=1;
    for(int i=0;i<n;i++)d[i]=min(d[i],d[u]+e[u][i]);
  }
  for(int i=0;i<n;i++)cout<<i<<" "<<d[i]<<endl;
  return 0;
}

