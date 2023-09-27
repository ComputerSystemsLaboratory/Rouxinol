#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
#include <cctype>
#include <numeric>
using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); ++(i))
#define foreach(c,i) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)

int R, C, B[12][10002];

void main2() {
  int ans = 0;
  for (int v = 0; v < (1<<R); ++v) {
    int cnt = 0;
    for (int x = 0; x < C; ++x) {
      int up = 0;
      for (int y = 0; y < R; ++y) {
        bool is_rev = v >> y & 1;
        if ((is_rev && !B[y][x]) || (!is_rev && B[y][x])) ++up;
      }
      cnt += max(up, R - up);
    }
    ans = max(ans, cnt);
  }
  printf("%d\n", ans);
}

int main() {
  while (scanf("%d%d", &R, &C), R | C) {
    rep(i,R) rep(j,C) scanf("%d", B[i]+j);
    main2();
  }
  return 0;
}