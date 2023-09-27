#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <math.h>

using namespace std;
typedef long long ll;
static const double EPS = 1e-9;
static const double PI = acos(-1.0);

#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, s, n) for (int i = (s); i < (int)(n); i++)
#define FOREQ(i, s, n) for (int i = (s); i <= (int)(n); i++)
#define DEC(i, s) for (int i = (s); i >= 0; i--)

#define SIZE(v) (int)((v).size())
#define MEMSET(v, h) memset((v), h, sizeof(v))
#define FIND(m, w) ((m).find(w) != (m).end())

int n, m;
int taro[200];
int hanako[200];

int main() {
  while (scanf("%d %d", &n, &m), n|m) {
    int tsum = 0;
    int hsum = 0;
    REP(i, n) { scanf("%d", &taro[i]); tsum += taro[i]; }
    REP(i, m) { scanf("%d", &hanako[i]); hsum += hanako[i]; }
    REP(i, n) REP(j, m) {
      if (tsum - taro[i] + hanako[j] == hsum - hanako[j] + taro[i]) {
        printf("%d %d\n", taro[i], hanako[j]);
        goto next;
      }
    }
    puts("-1");
next:;
  }
}