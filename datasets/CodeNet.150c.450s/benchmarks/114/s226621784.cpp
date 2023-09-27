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

  edge_def() {;}
  edge_def(int _from, int _to, int _cost) {
    from = _from;
    to   = _to;
    cost = _cost;
  }
} edge;

const int INF = 1000 * 1000 * 1000;
const int N = 100;
int n;
int ed[N];  //ed[i]:??????i???????°???¨?????¨?????¨?????????????????????????????????i??¨??¨?????¨??????????????????????????????
            //????°???¨?????¨????§?????????????????????????????????£????????????
int u[N];  //??¢???????°???¨?????¨???????????????????????????
vector<edge> es[N];

int prim(int s) {
  int i, j, res = 0;
  priority_queue<PII, vector<PII>, greater<PII > > q;
  memset(u, 0, sizeof(u));
  for (i=0; i<n; i++) ed[i] = INF;
  ed[s] = 0;
  q.push(PII(0, s));

  while (q.size()) {
    PII p = q.top(); q.pop();

    u[p.second] = 1;
    res += p.first;

    int m = INF;
    edge me;
    for (i=0; i<n; i++)
      for (j=0; j<(int)es[i].size(); j++) {
        edge e = es[i][j];
        if (u[e.from] && !u[e.to] && e.cost < m) {
          me = e;
          m = me.cost;
        }
      }
    if (m != INF) {
      q.push(PII(me.cost, me.to)); 
      ed[me.to] = me.cost;
    }
  }

  return res;
}


int main() {
  int i, j;
  scanf("%d ", &n);
  int c;
  for (i=0; i<n; i++)
    for (j=0; j<n; j++) {
      scanf("%d ", &c);
      if (c!=-1) es[i].psb(edge(i,j,c));
    }
  printf("%d\n", prim(0));
  return 0;
}