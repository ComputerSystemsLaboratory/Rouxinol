#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
int n;
int a[105][105];
int d[105];
void bfs(int x){
  d[x]=0;
  queue<P > q;
  int y=x;
  for(int i=1;i<=n;i++){
    if(a[y][i])q.push(P(i,d[y]+1));
  }
  while(!q.empty()){
    P p=q.front();q.pop();
    y=p.first;
    if(d[y]!=-1)continue;
    d[y]=p.second;
    for(int i=1;i<=n;i++){
      if(a[y][i])q.push(P(i,d[y]+1));
    }
  }
}
int main(){
  for(int i=0;i<105;i++){
    d[i]=-1;
  }
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
  bfs(1);
  for(int i=1;i<=n;i++){
    cout << i<< " " <<d[i] << endl;
  }
  return 0;
}