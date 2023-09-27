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

const int INF = 1000 * 1000 * 10;
const int N = 100;
int d[N][N];
int n;

int main() {
  int i, j, k;
  int u, v, c; 

  scanf("%d ", &n);
  for (i=0; i<n; i++) 
    for (j=0; j<n; j++) {
      if (i==j)
        d[i][j] = 0;
      else
        d[i][j] = INF;
    }

  for (i=0; i<n; i++) {
    scanf("%d%d ", &u, &k);
    for (j=0; j<k; j++) {
      scanf("%d%d ", &v, &c);
      d[u][v] = c;
    }
  }

  //Warshall-Floyd
  for (k=0; k<n; k++)
    for (i=0; i<n; i++)
      for (j=0; j<n; j++)
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

  for (i=0; i<n; i++) {
    printf("%d %d\n", i, d[0][i]); 
  }

	return 0;
}