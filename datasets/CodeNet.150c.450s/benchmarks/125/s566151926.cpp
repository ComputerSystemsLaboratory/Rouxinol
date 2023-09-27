#include <iostream>
#include <stack>
#include <cstdio>

static const int MAX=100;
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;
static const int NIL=-1;

using namespace std;

int adj[MAX+1][MAX+1];
int color[MAX+1],d[MAX+1],f[MAX+1];
stack<int> S;
int n;
int t=0;

int next(int u){
  for(int i=1;i<=n;i++){
    if(adj[u][i]==1&&color[i]==WHITE) return i;
  }
  return NIL;
}

void dfs(int u){
  S.push(u);
  color[u]=GRAY;
  d[u]=++t;
  while(S.empty()==false){
    u=S.top();
    int v=next(u);
    if(v!=NIL){
      color[v]=GRAY;
      d[v]=++t;
      S.push(v);
    }else{
      S.pop();
      color[u]=BLACK;
      f[u]=++t;
    }
  }
}

void dfs_init(){
  for(int i=1;i<=n;i++) color[i]=WHITE;
  for(int i=1;i<=n;i++){
    if(color[i]==WHITE) dfs(i);
  }
}

int main(){
  cin >> n;
  for(int i=1;i<=n;i++){
    int u,k; cin >> u >> k;
    for(int i=1;i<=n;i++) adj[u][i]=0;
    for(int i=0;i<k;i++){
      int v; cin >> v;
      adj[u][v]=1;
    }
  }
  dfs_init();
  for(int id=1;id<=n;id++){
    printf("%d %d %d\n",id,d[id],f[id]);
  }
}