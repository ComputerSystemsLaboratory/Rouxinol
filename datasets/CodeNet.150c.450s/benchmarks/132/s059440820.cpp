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

const int N = 50;
int c[N];

int main() {
  int n, p;
  while (1) {
    scanf("%d%d ", &n, &p);
    if (!n && !p) break;
    memset(c, 0, sizeof(c));
    int i = 0, ap = p;
    while (1) {
      if (p == 0) {
        p += c[i];
        c[i] = 0;
      } else {
        p--;
        c[i]++;
      }
      if (c[i] == ap) {
        printf("%d\n", i);
        break;
      }
      i = (i+1)%n;
    }
  }
  return 0;
}