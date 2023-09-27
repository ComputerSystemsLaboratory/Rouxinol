#include <cstdio>
using namespace std;
#define MAX_N 100

int graph[MAX_N+1][MAX_N+1];
int d[MAX_N+1];
int f[MAX_N+1];

int n;
int t;
void dfs(int id) {
  if(id != 0)
    t++;
  d[id] = t;
  for(int i=1;i<=n;i++) {
    if(graph[id][i] != 0 && d[i] == 0) {
      dfs(i);
    }
  }
  if(id != 0)
    t++;
  f[id] = t;
}

int main() {
  scanf("%d\n",&n);
  // dummy
  for(int i=0;i<=n;i++) {
    graph[0][i] = 1;
  }
  int u,k,v;
  for(int i=0;i<n;i++) {
    scanf("%d %d ",&u,&k);
    for(int j=0;j<k;j++) {
      scanf("%d ",&v);
      graph[u][v] = 1;
    }
  }

  dfs(0);

  for(int i=1;i<=n;i++) {
    printf("%d %d %d\n",i,d[i],f[i]);
  }
}