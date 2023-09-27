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

const int H = 10;
const int W = 5;
int h;
int c[H][W];

int main() {
  int i, j, k, l;
  int res;

  while (1) {
    scanf("%d ", &h); 
    if (!h) break;

    for (i=0; i<h; i++)
      for (j=0; j<W; j++)
        scanf("%d ", &(c[i][j]));

    res = 0;
    bool update = true;
    while (update) {
      update = false;
      for (i=h-1; i>=0; i--) {
        for (j=0; j<3; j++) {
          k = 1;
          while (c[i][j]!=0 && j+k<W && c[i][j+k]==c[i][j]) k++;
          if (k >= 3) {
            res += k * c[i][j];
            for (l=j; l<j+k; l++) c[i][l] = 0;
            update = true;
            break;
          }
        }
      }

      for (i=h-2; i>=0; i--)
        for (j=0; j<W; j++) {
          int d = i;
          while (d+1<h && c[d+1][j]==0) d++;
          if (i!=d) {
            c[d][j] = c[i][j];
            c[i][j] = 0;
          }
        }
    }

    printf("%d\n", res);
  }

  return 0;
}