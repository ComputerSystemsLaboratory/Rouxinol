#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <assert.h>
#include <vector>

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
  int n;
  while (scanf("%d", &n), n) {
    ll ans = -(1LL << 60);
    ll sum = 0;
    REP(i, n) {
      int v;
      scanf("%d", &v);
      ans = max(ans, (ll)v);
      sum += v;
      if (sum < 0) { sum = 0; }
      else { ans = max(ans, sum); }
    }
    printf("%lld\n", ans);
  }
}