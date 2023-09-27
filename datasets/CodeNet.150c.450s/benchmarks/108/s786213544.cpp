#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int n;
  cin>>n;
  vector<vector<int> > G(n,vector<int>());
  for(int i=0;i<n;i++){
    int u,k;
    cin>>u>>k;
    u--;
    for(int j=0;j<k;j++){
      int c;
      cin>>c;
      c--;
      G[u].push_back(c);
    }
  }
  int d[n];
  memset(d,-1,sizeof(d));
  queue<int> q;
  d[0]=0;
  q.push(0);
  while(!q.empty()){
    int v=q.front();q.pop();
    for(int u:G[v]){
      if(d[u]<0){
	d[u]=d[v]+1;	
	q.push(u);
      }
    }
  }
  for(int i=0;i<n;i++) cout<<i+1<<" "<<d[i]<<endl;;
  return 0;
}