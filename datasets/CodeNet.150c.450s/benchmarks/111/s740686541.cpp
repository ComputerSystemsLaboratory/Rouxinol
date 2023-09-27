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

const int N = 100;
const int M = 20;
int a[N];
ll dp[N][M+1];
int n;

int main() {
  int i, j;
  scanf("%d ", &n);
  for (i=0; i<n; i++) scanf("%d ", a+i);
  memset(dp, 0LL, sizeof(dp));
  dp[0][a[0]] = 1LL;
  for (i=1; i<=n-2; i++)
    for (j=0; j<=M; j++) {
      if (j-a[i]>=0) dp[i][j]  = dp[i-1][j-a[i]]; 
      if (j+a[i]<=M) dp[i][j] += dp[i-1][j+a[i]]; 
    }

  printf("%lld\n", dp[n-2][a[n-1]]);

	return 0;
}