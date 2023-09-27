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

const int N = 100;
const int M = 100;
int n, m;
int t[N], h[M];

int main() {
  while (1) {
    scanf("%d%d ", &n, &m);
    if (!n && !m) break;
    int tt = 0, th = 0;
    REP(i,n) {
      scanf("%d ", t+i);
      tt += t[i];
    }
    REP(i,m) {
      scanf("%d ", h+i);
      th += h[i];
    }
    int a = -1, b = -1, sum = 1000000;
    REP(i,n) REP(j,m) {
      int diff = h[j] - t[i];
      int tmp = h[j] + t[i];
      if (tt + diff == th - diff && tmp <= sum) {
        a = i, b = j;
        sum = tmp;
      }
    }
    if (a == -1)
      puts("-1");
    else {
      printf("%d %d\n", t[a], h[b]);
    }
  }
  return 0;
}