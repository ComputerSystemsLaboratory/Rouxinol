#include <iostream>
#include <vector>
#include <stack>

#define MAX 101

using namespace std;

int visited[MAX],d[MAX],f[MAX],called[MAX];
int tt=0;
vector<int> G[MAX];
stack<int> S;

int getNext(int u){
  if(called[u]>=G[u].size()) return -1;
  else{
    int x=G[u][called[u]];
    called[u]++;
    return x;
  }
}


void dfs(int u){
  S.push(u);
  visited[u]=1;
  d[u]=++tt;
  while(S.empty()==false){
    int x=S.top();
    int v=getNext(x);
    if(v!=-1){
      if(visited[v]==0){
        visited[v]=1;
        d[v]=++tt;
        S.push(v);
      }
    }else{
      S.pop();
      visited[x]=1;
      f[x]=++tt;
    }
  }
}

int main(){
  int n; cin >> n;
  for(int i=1;i<=n;i++){
    visited[i]=0;
    called[i]=0;
  }
  for(int i=0;i<n;i++){
    int u,k; cin >> u >> k;
    for(int i=0;i<k;i++){
      int v; cin >> v;
      G[u].push_back(v);
    }
  }
  for(int i=1;i<=n;i++){
    if(visited[i]==0){
      dfs(i);
    }
  }
  for(int i=1;i<=n;i++){
    cout << i << " " << d[i] << " " << f[i] << endl;
  }
}