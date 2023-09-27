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
const int N = 100000;
const int M = 100000;
int n, m, q;
vector<edge> es[N];
int d[N];

void dijkstra(int s) {
  int i;
  priority_queue<PII, vector<PII>, greater<PII > > q;
  q.push(PII(d[s], s));

  while (q.size()) {
    PII p = q.top();
    q.pop();
    int v = p.second;

    for (i=0; i<(int)es[v].size(); i++) {
      edge e = es[v][i];
      if (d[e.to]==-1) {
        d[e.to] = d[v];
        q.push(PII(d[e.to], e.to));
      }
    }
  }
}

int main() {
  int i;
  for (i=0; i<N; i++) es[i].clear();
  memset(d, 0xff, sizeof(d));

  scanf("%d%d ", &n, &m);
  for (i=0; i<m; i++) {
    int u, v;
    scanf("%d%d ", &u, &v);
    es[u].psb(edge(u, v, 0));
    es[v].psb(edge(v, u, 0));
  }

  int c = 0;
  for (i=0; i<n; i++)
    if (d[i]==-1)  {
      d[i] = c++; 
      dijkstra(i);
    }

  scanf("%d ", &q);
  for (i=0; i<q; i++) {
    int l, r;
    scanf("%d%d ", &l, &r);
    if (d[l]==d[r])
      printf("yes\n");
    else
      printf("no\n");
  }

	return 0;
}