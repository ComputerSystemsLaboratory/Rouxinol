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
const int INF = 1e+9;

const int N = 100;
int n;
int s[N+1];       //M_i : s[i-1] x s[i] (i=1,...,n)
int dp[N+1][N+1]; //dp[i][j] = (M_i * ... * M_j)????????????????¨?????????°???????°????(1<=i<=j<=n)

int main() {
  int i, j, k, l;
  scanf("%d ", &n);
  for (i=0; i<n; i++) scanf("%d%d ", s+i, s+i+1);
  for (i=1; i<=n; i++) dp[i][i] = 0;  //1????????????????¨?????????°???0
  for (l=2; l<=n; l++)  //M_i ... M_i????????°???????????§????????????
    for (i=1; i<=n-l+1; i++) {
      j = i + l - 1; 
      dp[i][j] = INF;
      for (k=i; k<j; k++)
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + s[i-1]*s[k]*s[j]);
    }

  printf("%d\n", dp[1][n]);

  return 0;
}