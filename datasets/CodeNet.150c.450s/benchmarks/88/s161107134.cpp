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

struct Rect {
  int h;
  int w;
  Rect(int h, int w) : h(h), w(w) {;}
  bool operator<(const Rect &rhs) const {
    if (diag() != rhs.diag()) { return diag() < rhs.diag(); }
    return h < rhs.h;
  }
  //bool operator>(const Rect &rhs) const { return rhs < *rect; }
  int diag() const { return h * h + w * w; }
};

int main() {
  int h, w;
  while (cin >> h >> w, h|w) {
    Rect base(h, w);
    Rect ans(150, 150);
    FOREQ(y, 1, 150) {
      FOREQ(x, y + 1, 150) {
        Rect cand(y, x);
        if (x == w && y == h) { continue; }
        if (cand < base) { continue; }
        ans = min(ans, cand);
      }
    }
    printf("%d %d\n", ans.h, ans.w);
  }
}