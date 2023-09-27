#include <cstdio>
#include <queue>
using namespace std;
#define MAX_N 100

int g[MAX_N+1][MAX_N+1];
int d[MAX_N+1];
bool visited[MAX_N+1];
queue<int> que;

int n;
int t = 1;

void bfs(int id) {
  visited[id]=true;
  que.push(id);
  queue<int> next_que;
  while(!que.empty()) {
    int v = que.front(); que.pop();
    for(int u=1;u<=n;u++) {
      if(g[v][u]!=0 && !visited[u]) {
        visited[u]=true;
        next_que.push(u);
        d[u] = t;
      }
    }
    if(que.empty()){
      que = next_que;
      while(!next_que.empty()) next_que.pop();
      t++;
    }
  }
}

int main() {
  scanf("%d\n",&n);
  int u,k,v;
  for(int i=0;i<n;i++) {
    scanf("%d %d ",&u,&k);
    for(int j=0;j<k;j++) {
      scanf("%d ",&v);
      g[u][v] = 1;
    }
  }
  bfs(1);
  for(int i=1;i<=n;i++) {
    if(visited[i])
      printf("%d %d\n",i,d[i]);
    else
      printf("%d -1\n",i);
  }
}