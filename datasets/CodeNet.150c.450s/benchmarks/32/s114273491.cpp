#include <bits/stdc++.h>

using namespace std;

#define FOR(i,s,e) for(int (i)=(s);(i)<(int)(e);(i)++)
#define REP(i,e) FOR(i,0,e)

#define all(o) (o).begin(), (o).end()
#define psb(x) push_back(x)
#define UNIQUE(o) (o).erase(unique(sort(all((o)))))

typedef long long ll;
const int M = 200;
int p[M];

int main() {
  int m, l, u;
  while(1) {
    scanf("%d%d%d ", &m, &l, &u);
    if (!m) break;
    REP(i,m) scanf("%d ", p+i);
    int res = 0, g = 0;
    FOR(n, l, u+1) {
      if (p[n-1] - p[n] >= g) {
        g = p[n-1] - p[n];
        res = n;
      }
    }
    printf("%d\n", res);
  }
  return 0;
}