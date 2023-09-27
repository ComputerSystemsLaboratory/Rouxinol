#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

static const int MAX=100;
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;
static const int INF=-1;
int n,adj[MAX+1][MAX+1];
int color[MAX+1],d[MAX+1];
queue<int> Q;

void bfs(){
  for(int i=1;i<=n;i++){
    color[i]=WHITE;
    d[i]=INF;
  }
  d[1]=0;
  color[1]=GRAY;
  Q.push(1);
  while(!Q.empty()){
    int u=Q.front(); Q.pop();
    for(int i=1;i<=n;i++){
      if(adj[u][i] && color[i]==WHITE){
        color[i]=GRAY;
        d[i]=d[u]+1;
        Q.push(i);
      }
    }
    color[u]=BLACK;
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
  bfs();
  for(int id=1;id<=n;id++)
    printf("%d %d\n",id,d[id]);
}