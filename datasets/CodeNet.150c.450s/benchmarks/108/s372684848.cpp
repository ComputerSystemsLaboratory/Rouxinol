#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
  queue<int> q;
  int n,a,k,u,c[101];
  vector<int>  d[101];
  cin>>n;for(int i=0;i<n;i++){
    cin>>u>>k;c[i+1]=-1;
    d[u].resize(k);
    for(int j=0;j<k;j++) cin>>d[u][j];
  }q.push(1),c[1]=0;
  while(!q.empty()){
   a=q.front(),q.pop();
    for(int i=0;i<d[a].size();i++)
      if( d[a][i]>1 && c[d[a][i]]==-1) q.push(d[a][i]),c[d[a][i]]=c[a]+1;
  } for(int i=1;i<=n;i++) cout<<i<<" "<<c[i]<<endl;
  return 0;
}