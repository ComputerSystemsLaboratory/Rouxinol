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
const int N = 1000;
int dp[N+1][N+1];

int main() {
  int i, j;
  string s, t;
  cin >> s;
  cin >> t;
  for (i=0; i<=(int)s.size(); i++)
    for (j=0; j<=(int)t.size(); j++)
      dp[i][j] = INF;
  for (i=0; i<=(int)s.size(); i++) dp[i][0] = i;
  for (j=0; j<=(int)t.size(); j++) dp[0][j] = j;
  
  for (i=1; i<=(int)s.size(); i++)
    for (j=1; j<=(int)t.size(); j++) {
      int x = (s[i-1]==t[j-1]) ? 0 : 1;
      dp[i][j] = min(dp[i-1][j-1]+x, min(dp[i-1][j]+1, dp[i][j-1]+1));
    }
  printf("%d\n", dp[s.size()][t.size()]);
  return 0;
}