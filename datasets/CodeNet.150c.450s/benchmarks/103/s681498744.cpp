#include <cstdio>
#include <cstring>
#include <cassert>
#include <algorithm>
using namespace std;

#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
#define FOR(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define FOREACH(i, c) for (__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)

int sum[1024];

inline unsigned next_set(unsigned x)
{
  unsigned smallest = x & -x;
  unsigned ripple = x + smallest;
  unsigned new_smallest = ripple & -ripple;
  unsigned ones = ((new_smallest / smallest) >> 1) - 1;
  return ripple | ones;
}

int main()
{
  memset(sum, 0, sizeof(sum));
  REP(i, 1024)
    REP(j, 10)
      if (i & (1 << j))
        sum[i] += j;

  int n, s;
  while (scanf("%d%d", &n, &s), n|s) {
    int count = 0;
    for (int S = (1<<n)-1; S < 1<<10; S = next_set(S))
      if (sum[S] == s)
        ++count;
    printf("%d\n", count);
  }
}