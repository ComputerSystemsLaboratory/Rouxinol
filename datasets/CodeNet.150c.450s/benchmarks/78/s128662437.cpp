#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <assert.h>
#include <vector>

using namespace std;
typedef long long ll;
static const double EPS = 1e-9;
static const double PI = acos(-1.0);

#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, s, n) for (int i = (s); i < (int)(n); i++)
#define FOREQ(i, s, n) for (int i = (s); i <= (int)(n); i++)
#define FORIT(it, c) for (__typeof((c).begin())it = (c).begin(); it != (c).end(); it++)
#define MEMSET(v, h) memset((v), h, sizeof(v))

int normal[1001000];
int odd[1001000];

int main() {
  MEMSET(normal, 0x0f);
  MEMSET(odd, 0x0f);
  normal[0] = odd[0] = 0;
  REP(i, 1000001) {
    REP(j, 10000) {
      int plus = j * (j + 1) * (j + 2) / 6;
      if (i + plus > 1000000) { break; }
      normal[i + plus] = min(normal[i + plus], normal[i] + 1);
      if (plus & 1) {
        odd[i + plus] = min(odd[i + plus], odd[i] + 1);
      }
    }
  }
  int n;
  while (scanf("%d", &n), n) {
    printf("%d %d\n", normal[n], odd[n]);
  }
}