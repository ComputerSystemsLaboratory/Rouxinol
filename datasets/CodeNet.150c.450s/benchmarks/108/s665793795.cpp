#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main(){
  queue<int> q;
  int n,k,u;
  int c[101];
  vector<int>  d[101];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>u>>k;
    d[u].resize(k);
    for(int j=0;j<k;j++) cin>>d[u][j];
  }
  for(int i=0;i<=n;i++) c[i]=-1;
  q.push(1);
  c[1]=0;
  int a;
  while(!q.empty()){
    a=q.front(),q.pop();
    for(int i=0;i<d[a].size();i++)
      if( d[a][i]>1 && c[d[a][i]]==-1){
	q.push(d[a][i]);
	c[d[a][i]]=c[a]+1;
      }
  }
  for(int i=1;i<=n;i++) cout<<i<<" "<<c[i]<<endl;
  return 0;
}