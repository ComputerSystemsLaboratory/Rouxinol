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

int psize;
int prime[1000010];
bool bprime[1000010];
int Eratosthenes(int n) {
  psize = 0;
  memset(bprime, true, sizeof(bprime));
  bprime[0] = bprime[1] = false;
  for (int i = 2; i <= n; i++) {
    if (!bprime[i]) { continue; }
    prime[psize++] = i;
    for (int j = i + i; j <= n; j += i) {
      bprime[j] = false;
    }
  }
  return psize;
}

int main() {
  Eratosthenes(1000000);
  int a, d, n;
  while (scanf("%d %d %d", &a, &d, &n), a|d|n) {
    int cnt = 0;
    if (bprime[a]) { cnt++; }
    while (cnt != n) {
      a += d;
      if (bprime[a]) { cnt++; }
    }
    printf("%d\n", a);
  }
}