#include <bits/stdc++.h>
using namespace std;
vector<int> to[100005];
const int INF=100010101;
int main(){
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    a--;
    b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  queue<int> q;
  vector<int> pre(n,-1);
  vector<int> dist(n,INF);
  dist[0]=0;
  q.push(0);
  while(!q.empty()){
    int v=q.front();q.pop();
    for(int u:to[v]){
      if(dist[u]!=INF)continue;
      dist[u]=dist[v]+1;
      pre[u]=v;
      q.push(u);
    }
  }
  cout<<"Yes"<<endl;
  for(int i=0;i<n;i++){
    if(i==0)continue;
    int ans=pre[i];
    ans++;
    cout<<ans<<endl;
  }
  return 0;
}