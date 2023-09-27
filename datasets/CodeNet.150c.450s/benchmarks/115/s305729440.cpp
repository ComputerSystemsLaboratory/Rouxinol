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

const int N = 1000;
char s[N+1], t[N+1];
int ls, lt;
int q;
int dp[N+1][N+1];
//dp[i][j] = s[0]...s[i-1]??¨t[0]...t[j-1]???LCS
//(1<=i<=ls, 1<=j<=lt)

int main() {
  int i, j, k;
  scanf("%d ", &q);
  for (k=0; k<q; k++) {
    ls = lt = 0;
    memset(s, 0, sizeof(s)), scanf("%s ", s);
    memset(t, 0, sizeof(t)), scanf("%s ", t);
    while (s[ls]) ls++;
    while (t[lt]) lt++;

    memset(dp, 0, sizeof(dp));
    for (i=1; i<=ls; i++)
      for (j=1; j<=lt; j++) {
        if (s[i-1]==t[j-1])
          dp[i][j] = dp[i-1][j-1] + 1;
        else
          dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }

    printf("%d\n", dp[ls][lt]);
  }

  return 0;
}