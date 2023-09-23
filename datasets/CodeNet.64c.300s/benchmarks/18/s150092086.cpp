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

const int N = 30;
int dp[N+1];
int n;

int main() {
  while (1) {
    scanf("%d ", &n); 
    if (!n) break;
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i=1; i<=n; i++) {
      if (i-3 >= 0) dp[i] += dp[i-3]; 
      if (i-2 >= 0) dp[i] += dp[i-2]; 
      if (i-1 >= 0) dp[i] += dp[i-1]; 
    }
    int res = dp[n]/3650;
    if (dp[n]%3650) res++;
    printf("%d\n", res);
  }

	return 0;
}