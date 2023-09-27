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

const int INF = 1000*1000*1000;
const int N = 500000;
const int M = 20;
int n, m;
int dp[M+1][N+1];
int c[N+1];

int main() {
  int i, j, k;
  scanf("%d%d ", &n, &m);
  for (i=0; i<m; i++)
    scanf("%d ", c+i+1);

  for (i=0; i<=m; i++)
    for (j=0; j<=n; j++)
      dp[i][j] = INF;

  for (j=0; j<=n; j++)
    if (!(j%c[1])) dp[1][j] = j/c[1];

  for (i=2; i<=m; i++)
    for (j=0; j<=n; j++) {
      if (j-c[i]<0)
        dp[i][j] = dp[i-1][j];
      else
        dp[i][j] = min(dp[i-1][j], dp[i][j-c[i]]+1);
//      for (k=0; j-c[i]*k>=0; k++)
//        dp[i][j] = min(dp[i][j], dp[i-1][j-c[i]*k]+k);
    }
  printf("%d\n", dp[m][n]);

	return 0;
}