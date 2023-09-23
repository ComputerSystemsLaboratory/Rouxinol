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

int main() {
  int x, y, s;
  while (scanf("%d %d %d", &x, &y, &s) > 0 && x && y && s) {
    x += 100; y += 100;
    int ans = 0;
    FOR(i, 1, s - 1) {
      FOR(j, 1, s- 1) {
        int v1 = i * x / 100;
        int v2 = j * x / 100;
        if (v1 + v2 != s) { continue; }
        int sum = i * y / 100 + j * y / 100;
        ans = max(ans, sum);
      }
    }
    printf("%d\n", ans);
  }
}