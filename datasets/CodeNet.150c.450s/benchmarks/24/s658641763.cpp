#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

struct ST {
  int D, P;
  static bool hi(const ST& l, const ST& r) { return l.P > r.P; }
};


int N, M;
ST st[10000];

bool input() {
  int i;

  scanf("%d %d", &N, &M);
  if (!N && !M) return false;

  for (i = 0; i < N; i++) {
    scanf("%d %d", &st[i].D, &st[i].P);
  }

  return true;
}

int main() {
  int i, sum;

  while (input()) {
    sum = 0;
    sort(st, st + N, ST::hi);
    for (i = 0; i < N; i++) {
      if (st[i].D < M) {
        M -= st[i].D;
        st[i].D = 0;
      } else {
        st[i].D -= M;
        M = 0;
      }
      sum += st[i].D * st[i].P;
    }
    printf("%d\n", sum);

  }

  return 0;
}