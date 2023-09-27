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

const int V = 100;
int n;

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

vector<edge> es[V];
int nm[V][V];

int main() {
  int i, j, k;
  memset(nm, 0, sizeof(nm));
  for (i=0; i<V; i++) es[i].clear();
  scanf("%d ", &n);
  for (i=0; i<n; i++) {
    int u, v;
    scanf("%d ", &u);
    scanf("%d ", &k);
    for (j=0; j<k; j++) {
      scanf("%d ", &v); 
      es[u-1].psb(edge(u-1, v-1, 0));
//      es[v-1].psb(edge(v-1, u-1, 0));
//      nm[u-1][v-1] = nm[v-1][u-1] = 1;
      nm[u-1][v-1] = 1;
    }
  }

  for (i=0; i<n; i++)
    for (j=0; j<n; j++)
      printf("%d%c", nm[i][j], ((j==n-1) ? '\n' : ' '));

	return 0;
}