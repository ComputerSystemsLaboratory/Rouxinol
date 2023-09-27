#include <bits/stdc++.h>

using namespace std;

#define FOR(i,s,e) for((i)=(s);(i)<(int)(e);(i)++)
#define REP(i,e) FOR(i,0,e)

#define all(o) (o).begin(), (o).end()
#define psb(x) push_back(x)
#define mp(x,y) make_pair((x),(y))

typedef long long ll;
typedef pair<int, int> PII;

const double EPS = 1e-10;

typedef struct edge_def {
  int from;
  int to;
  int cost;

  edge_def(int _from, int _to, int _cost) {
    from = _from;
    to   = _to;
    cost = _cost;
  }
} edge;

const int V = 100;
int n, t;
vector<edge> es[V];
int d[V], f[V];

void dfs(int v) {
  int i;
  d[v] = ++t;
  for (i=0; i<(int)es[v].size(); i++) {
    int to = es[v][i].to;
    if (d[to] == -1) dfs(to);
  }
  f[v] = ++t;
}

int main() {
  int i, j;
  memset(d, 0xff, sizeof(d));
  memset(f, 0, sizeof(f));
  for (i=0; i<V; i++) es[i].clear();

  scanf("%d ", &n);
  for (i=0; i<n; i++) {
    int u, v, k;
    scanf("%d ", &u);
    scanf("%d ", &k);
    for (j=0; j<k; j++) {
      scanf("%d ", &v);
      es[u-1].psb(edge(u-1, v-1, 0));
    }
  }

  t = 0;
  for (i=0; i<n; i++)
    if (d[i] == -1) dfs(i);

  for (i=0; i<n; i++) 
    printf("%d %d %d\n", i+1, d[i], f[i]);

	return 0;
}