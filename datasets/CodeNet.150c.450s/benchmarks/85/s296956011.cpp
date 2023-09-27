#include <bits/stdc++.h>

using namespace std;

#define FOR(i,s,e) for(int (i)=(s);(i)<(int)(e);(i)++)
#define REP(i,e) FOR(i,0,e)
#define RFOR(i,e,s) for(int (i)=(e)-1;(i)>=(int)(s);(i)--)
#define RREP(i,e) RFOR(i,e,0)

#define all(o) (o).begin(), (o).end()
#define psb(x) push_back(x)
#define mp(x,y) make_pair((x),(y))

typedef long long ll;
typedef pair<int, int> PII;
typedef priority_queue<int> PQI;
typedef priority_queue<PII> PQII;

const double EPS = 1e-10;
const int INF = 1e9;
const int N = 100;
int n;
int r[N], c[N];
int dp[N+1][N];

int main() {
  scanf("%d ", &n);
  REP(i,n) scanf("%d%d ", r+i, c+i);

  REP(i,n+1) REP(j,n) dp[i][j] = INF;
  REP(j,n) dp[1][j] = 0;
  FOR(i,2,n+1) REP(j,n-i+1) FOR(k,1,i)
    dp[i][j] = min(dp[i][j], dp[k][j] + r[j]*c[j+k-1]*c[i+j-1] + dp[i-k][j+k]);

  printf("%d\n", dp[n][0]);

  return 0;
}