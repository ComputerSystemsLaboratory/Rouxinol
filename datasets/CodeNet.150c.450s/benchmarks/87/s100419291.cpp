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

const int w = 5;
int h;
int field[20][20];
bool del[20][20];
int main() {
  while (scanf("%d", &h) > 0 && h) {
    MEMSET(field, 0);
    REP(y, h) {
      REP(x, w) {
        scanf("%d", &field[y][x]);
      }
    }
    int ans = 0;
    REP(iter1, 100) {
      MEMSET(del, false);
      REP(y, h) {
        REP(x, w - 2) {
          if (field[y][x] == field[y][x + 1] && field[y][x] == field[y][x + 2]) {
            del[y][x] = del[y][x + 1] = del[y][x + 2] = true;
          }
        }
        REP(x, w) {
          if (!del[y][x]) { continue; }
          ans += field[y][x];
          field[y][x] = 0;
        }
      }
      REP(iter2, h) {
        for (int y =  h - 2; y >= 0; y--) {
          REP(x, w) {
            if (field[y + 1][x] == 0) { swap(field[y][x], field[y + 1][x]); }
          }
        }
      }
    }
    printf("%d\n", ans);
  }
}