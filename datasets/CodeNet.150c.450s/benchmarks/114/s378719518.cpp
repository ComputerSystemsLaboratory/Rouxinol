#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int n;
  cin>>n;
  int a[n][n];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      cin>>a[i][j];
  int ans=0;
  bool used[n];
  memset(used,0,sizeof(used));
  used[0]=1;
  int cost[n];
  for(int i=0;i<n;i++) cost[i]=a[0][i];
  while(1){
    int v=-1;
    for(int i=0;i<n;i++){
      if(used[i]||cost[i]<0) continue;
      //cout<<i<<":"<<cost[i]<<endl;
      if(v<0||cost[i]<cost[v]) v=i;
    }
    if(v<0) break;
    used[v]=1;
    ans+=cost[v];
    //cout<<v<<endl;
    for(int i=0;i<n;i++){
      if(a[v][i]<0) continue;
      if(cost[i]<0||a[v][i]<cost[i]) cost[i]=a[v][i];
    }
  }
  cout<<ans<<endl;
  return 0;
}