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

int h, w;

int main() {
  int i, j;
  int rh, rw;
  while (1) {
    scanf("%d%d ", &h, &w); 
    if (!h && !w) break;

    rh = h; rw = w;
    int min_diag = 200*200;
    for (i=1; i<=150; i++)
      for (j=i+1; j<=150; j++) {
        int diag = i*i + j*j; 
        if ((diag <= h*h + w*w) && (diag != (h*h + w*w) || i<=h)) continue;
        if ((diag < min_diag) || (diag = min_diag && i < rh)) {
          rh = i;
          rw = j; 
          min_diag = diag;
        }
      }
    printf("%d %d\n", rh, rw);
  }
	return 0;
}