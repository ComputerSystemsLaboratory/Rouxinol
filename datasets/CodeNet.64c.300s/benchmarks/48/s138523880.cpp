#include <assert.h>
#include <ctype.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

#include <algorithm>
#include <complex>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define SZ(a) (int)(a).size()
#define FOR(i,a,b) for (int i=(a); i<=(b); ++i)
#define REP(i,n) for (int i=0; i<(n); ++i)
#define ALL(c) c.begin(), c.end()
#define CLR(c,n) memset(c, n, sizeof(c))
#define TR(it, c) for(typeof(c.begin()) it = c.begin();it != c.end(); ++it)
#define CONTAIN(it, c) (c.find(it) != c.end())
typedef vector<int> VI;
typedef pair<int, int> PII;
template <class T> void checkmin(T &a, T b) { if (b<a) a=b; }
template <class T> void checkmax(T &a, T b) { if (b>a) a=b; }
const int INF=0x3F3F3F3F;

const int N=1<<20;
int p[N];
int main(int argc, char *argv[]) {
  p[0] = p[1] = 0;
  fill(p + 2, p+N, 1);
  for (int i = 2; i * i < N; ++i) {
    if (p[i]) {
      for (int j = i * i; j < N; j += i) {
        p[j] = 0;
      }
    }
  }
  FOR(i, 3, N-1) p[i] += p[i-1];
  int n;
  while (scanf("%d", &n) == 1) printf("%d\n", p[n]);
}