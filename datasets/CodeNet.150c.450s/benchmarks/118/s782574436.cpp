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

const int Y = 1000;
int dsum[Y+1];

int main() {
  memset(dsum, 0, sizeof(dsum));
  FOR(i,1,Y+1) dsum[i] = dsum[i-1] + 200 - (i%3 ? 5 : 0);
  int n;
  scanf("%d ", &n);
  REP(i,n) {
    int y, m, d;
    scanf("%d%d%d ", &y, &m, &d);
    int res = dsum[y-1] + 20*(m-1) + d;
    if (y%3) res -= (m-1)/2;
    res = dsum[Y-1] + 1 - res;
    printf("%d\n", res);
  }
  return 0;
}