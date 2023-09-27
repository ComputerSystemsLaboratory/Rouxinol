#include <bits/stdc++.h>

using namespace std;

#define FOR(i,s,e) for(int (i)=(s);(i)<(int)(e);(i)++)
#define REP(i,e) FOR(i,0,e)

#define all(o) (o).begin(), (o).end()
#define psb(x) push_back(x)
#define UNIQUE(o) (o).erase(unique(sort(all((o)))))

typedef long long ll;
const int N = 50;
int n, r, p, c;
int a[N][2];

int main() {
  while (1) {
    scanf("%d%d ", &n, &r);
    if (!n) break;
    REP(i,n) a[n-1-i][0] = i+1;
    int crt, nxt;
    REP(i,r) {
      crt = i&1, nxt = (i+1)&1;
      scanf("%d%d ", &p, &c);
      p--;
      REP(j,c) a[j][nxt] = a[p+j][crt];
      REP(j,p) a[j+c][nxt] = a[j][crt];
      FOR(j,p+c,n) a[j][nxt] = a[j][crt];
    }
    printf("%d\n", a[0][nxt]);
  }
  return 0;
}