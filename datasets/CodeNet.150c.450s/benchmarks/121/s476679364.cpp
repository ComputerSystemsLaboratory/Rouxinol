/*
 * AOJ 0118 Property Distribution
 * HxW???????????????????????????????¬?????±????????????´?????°
 * H, W <= 100
 */

#include <assert.h>
#include <ctype.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

#include <algorithm>
#include <complex>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define SZ(a) (int)(a).size()
#define FOR(i,a,b) for (int i=(a); i<=(b); ++i)
#define REP(i,n) for (int i=0; i<(n); ++i)
#define ALL(c) c.begin(), c.end()
#define CLR(c,n) memset(c, n, sizeof(c))
#define TR(it, c) for(typeof(c.begin()) it = c.begin();it != c.end(); ++it)
#define CONTAIN(it, c) (c.find(it) != c.end())
typedef vector<int> VI;
typedef pair<int, int> PII;
template <class T> void checkmin(T &a, T b) { if (b<a) a=b; }
template <class T> void checkmax(T &a, T b) { if (b>a) a=b; }

int h, w;
char s[104][104];

int dx[4] = { -1, 0, 1, 0 };
void fill(int x, int y, char c) {
  if (x < 0 || x >= h || y < 0 || y >= w) return;
  if (s[x][y] != c) return;
  s[x][y] = '\0';
  REP(dir, 4) fill(x + dx[dir], y + dx[dir^1], c);
}

int main(int argc, char *argv[]) {
  while (scanf("%d %d", &h, &w) == 2 && h + w > 0) {
    REP(i, h) scanf("%s", s[i]);
    int ans = 0;
    REP(i, h) REP(j, w) if (s[i][j]) fill(i, j, s[i][j]), ++ans;
    printf("%d\n", ans);
  }
}