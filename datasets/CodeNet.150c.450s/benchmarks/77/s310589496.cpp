#include <bits/stdc++.h>

using namespace std;

#define FOR(i,s,e) for(int (i)=(s);(i)<(int)(e);(i)++)
#define REP(i,e) FOR(i,0,e)

#define all(o) (o).begin(), (o).end()
#define psb(x) push_back(x)
#define UNIQUE(o) (o).erase(unique(sort(all((o)))))

typedef long long ll;
const int N = 20;
int mp[N+1][N+1];

int main() {
  int n, m;
  while (1) {
    memset(mp, 0, sizeof(mp));
    scanf("%d ", &n);
    if (!n) break;
    int x, y;
    REP(i,n) {
      scanf("%d%d ", &x, &y);
      mp[x][y] = 1;
    }
    scanf("%d ", &m);
    int c = 0;
    x = 10, y = 10;
    REP(i,m) {
      char d;
      int dxy;
      scanf("%c%d ", &d, &dxy);
      REP(j,dxy) {
        if (d == 'N')
          y++;
        else if (d == 'E')
          x++;
        else if (d == 'W')
          x--;
        else 
          y--;
        if (mp[x][y]) {
          c++;
          mp[x][y] = 0;
        }
      }
    }
    puts(c==n ? "Yes" : "No");
  }
  return 0;
}