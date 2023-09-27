#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <assert.h>
#include <vector>
#include <queue>
#include <string>
#include <map>
#include <set>

using namespace std;
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
static const double EPS = 1e-9;
static const double PI = acos(-1.0);

#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, s, n) for (int i = (s); i < (int)(n); i++)
#define FOREQ(i, s, n) for (int i = (s); i <= (int)(n); i++)
#define FORIT(it, c) for (__typeof((c).begin())it = (c).begin(); it != (c).end(); it++)
#define MEMSET(v, h) memset((v), h, sizeof(v))

inline int MaxDay(int y, int m) {
  if (y % 3 == 0) { return 20; }
  return m % 2 == 1 ? 20 : 19;
}
int main() {
  int n;
  int y, m, d;
  scanf("%d", &n);
  REP(i, n) {
    scanf("%d %d %d", &y, &m, &d);
    int ans = 0;
    while (y != 1000 || m != 1 || d != 1) {
      ans++;
      d++;
      if (d > MaxDay(y, m)) {
        d = 1;
        m++;
        if (m > 10) {
          m = 1;
          y++;
        }
      }
    }
    printf("%d\n", ans);
  }
}