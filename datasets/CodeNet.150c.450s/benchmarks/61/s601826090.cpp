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

int seq[110];

int main() {
  int n, a, b, c, x;
  while (scanf("%d %d %d %d %d", &n, &a, &b, &c, &x), n|a|b|c|x) {
    REP(i, n) { scanf("%d", &seq[i]); }
    int cnt = 0;
    REP(i, n) {
      while (true) {
        if (x == seq[i]) { break; }
        x = (a * x + b) % c;
        cnt++;
        if (cnt > 10000) { break; }
      }
      if (i == n - 1) { break; }
      x = (a * x + b) % c;
      cnt++;
    }
    if (cnt > 10000) { puts("-1"); }
    else { printf("%d\n", cnt); }
  }
}