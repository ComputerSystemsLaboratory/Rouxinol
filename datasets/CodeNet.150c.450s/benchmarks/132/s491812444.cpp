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

int n, p;
int stone[100];

int main() {
  while (scanf("%d %d", &n, &p), n|p) {
    MEMSET(stone, 0);
    int turn = 0;
    while (true) {
      if (p > 0) {
        stone[turn]++;
        p--;
        if (p == 0) {
          int have = 0;
          REP(i, n) {
            if (stone[i] > 0) { have++; }
          }
          if (have == 1) {
            printf("%d\n", turn);
            break;
          }
        }
      } else {
        p += stone[turn];
        stone[turn] = 0;
      }
      turn = (turn + 1) % n;
    }
  }
}