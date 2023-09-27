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

const int INF = INT_MAX;
const int V = 100;
int n, t;
vector<edge> es[V];
int d[V];

void bellman_ford(int s) {
  int i, j;
  for (i=0; i<n; i++) d[i] = INF;
  d[s] = 0;
  
  while (1) {
    bool update = false;
    for (i=0; i<n; i++)
      for (j=0; j<(int)es[i].size(); j++) {
        edge e = es[i][j];
        if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
          d[e.to] = d[e.from] + e.cost;
          update = true;
        }
      }
    if (!update) break;
  } 
}

int main() {
  int i, j;
  for (i=0; i<V; i++) es[i].clear();

  scanf("%d ", &n);
  for (i=0; i<n; i++) {
    int u, v, k;
    scanf("%d ", &u);
    scanf("%d ", &k);
    for (j=0; j<k; j++) {
      scanf("%d ", &v);
      es[u-1].psb(edge(u-1, v-1, 1));
    }
  }

  bellman_ford(0);

  for (i=0; i<n; i++) {
    if (d[i]==INF) d[i] = -1;
    printf("%d %d\n", i+1, d[i]);
  }

	return 0;
}