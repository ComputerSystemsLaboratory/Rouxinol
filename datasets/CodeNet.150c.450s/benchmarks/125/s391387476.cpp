#include <iostream>
using namespace std;
int a[120][120],b[120][2],u,k,v,n,cou=1;
void dfs(int i){
  b[i][0]=cou;
  cou++;
  for(int j=1;j<=n;j++){
    if(a[i][j]==1&&b[j][0]==0)dfs(j);
  }
  b[i][1]=cou;
  cou++;
}

int main(){
  cin>>n;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
      a[i][j]=0;
      b[i][0]=0;
      b[i][1]=0;
    }
  }
  for(int i=1;i<=n;i++){
    cin>>u>>k;
    for(int j=0;j<k;j++){
      cin>>v;
      a[u][v]=1;
    }
  }
  for(int i=1;i<=n;i++){
    if(b[i][0]==0)dfs(i);
  }
  for(int i=1;i<=n;i++){
    cout<<i<<" "<<b[i][0]<<" "<<b[i][1]<<endl;;
  }
  return 0;
}