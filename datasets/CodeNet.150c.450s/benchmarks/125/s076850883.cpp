#include<bits/stdc++.h>
using namespace std;
int a[105][105];
pair<int,int> ans[105];
int co;
int n;
void dfs(int x){
  if(ans[x].first==0){
    co++;
    ans[x].first = co ;
  }
  else return;
  //cout << n << endl;
  for(int i=1;i<=n;i++){
    //cout << a[x][i]<<endl;
    if(a[x][i]==1)dfs(i);
  }
  if(ans[x].second==0){
    co++;
    ans[x].second=co;
  }
}

int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    int u,m;
    cin >> u >> m;
    for(int j=0;j<m;j++){
      int v;
      cin >> v;
      a[u][v]=1;
    }
  }
  for(int i=1;i<=n;i++){
    dfs(i);
  }
  for(int i=1;i<=n;i++){
    cout << i << " " << ans[i].first << " "<< ans[i].second << endl;
  }
  return 0;
}