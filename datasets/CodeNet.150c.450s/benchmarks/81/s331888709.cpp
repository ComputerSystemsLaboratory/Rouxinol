/*
AOJ 0189 Convenient Location

?¢????????±???????????????¬??? ??°??¶??????????????¬?????? ???????????????  ?????¬?????° ????¶????10

?????\??????????????\??????????¬¬?????????n (1 ??? n ??? 45)?????\?????\n?????? (x, y, d)???x??°y????????????d
??????????????¬?????? ??? ????????????
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

const int N = 10;
const int INF = 0x3F3F3F3F;
int dist[N][N];
int n, e, name[N];
map<int, int> name_map;

int getid(int x) {
  map<int, int>::iterator it = name_map.find(x);
  if (it == name_map.end()) {
    name_map[x] = n;
    name[n] = x;
    return n++;
  } else {
    return it->second;
  }
}

int main(int argc, char *argv[]) {
  int x, y, d;
  while (scanf("%d", &e) == 1 && e > 0) {
    n = 0;
    name_map.clear();
    CLR(dist, INF);
    while (e--) {
      scanf("%d %d %d", &x, &y, &d);
      x = getid(x); y = getid(y);
      checkmin(dist[x][y], d);
      checkmin(dist[y][x], d);
    }
    REP(i, n) dist[i][i] = 0;
    REP(k, n) REP(i, n) REP(j, n) {
      checkmin(dist[i][j], dist[i][k] + dist[k][j]);
    }
    int ans = INF, best = -1;
    REP(i, n) {
      int current = accumulate(dist[i], dist[i] + n, 0);
      if (current < ans) {
        ans = current;
        best = name[i];
      }
    }
    printf("%d %d\n", best, ans);
  }
}