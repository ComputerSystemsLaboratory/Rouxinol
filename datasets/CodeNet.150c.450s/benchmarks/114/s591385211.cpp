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

const int INF = 1000 * 1000 * 1000;
const int N = 100;
int n;
int c[N][N];
int d[N];
bool used[N];

int prim() {
  int i, res = 0;
  for (i=0; i<n; i++) {
    d[i] = INF;
    used[i] = false;
  }

  d[0] = 0;
  while (1) {
    int v = -1;
    for (i=0; i<n; i++)
      if (!used[i] && (v==-1 || (v>=0 && d[i]<d[v])))
        v = i;
  
    if (v==-1) break;
    used[v] = true;
    res += d[v];
    for (i=0; i<n; i++)
      d[i] = min(d[i], c[v][i]);
  }

  return res;
}

int main() {
  int i, j;
  scanf("%d ", &n);
  for (i=0; i<n; i++)
    for (j=0; j<n; j++) {
      scanf("%d ", &(c[i][j]));
      if (c[i][j]==-1) c[i][j] = INF;
    }
  printf("%d\n", prim());
  return 0;
}