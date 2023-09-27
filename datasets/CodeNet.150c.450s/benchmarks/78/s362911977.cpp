#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define LET(name, value) __typeof(value) name = value
#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
#define FOR(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define FOREQ(i, a, b) for (int i = (a); i <= (int)(b); ++i)
#define ALL(c) (c).begin(), (c).end()
#define FOREACH(i, c) for (LET(i, (c).begin()); i != (c).end(); ++i)

const int M = 181;
int tetra[M];
int memo1[1000010];
int memo2[1000010];

int dfs1(int n) {
  if (memo1[n] != -1) { return memo1[n]; }
  if (n == 0) { return memo1[n] = 0; }
  int ret = 1000000;
  for (int i = M-1; i >= 0; --i) {
    if (tetra[i] <= n) {
      ret = min(ret, dfs1(n-tetra[i])+1);
    }
  }
  return memo1[n] = ret;
}

int dfs2(int n) {
  if (memo2[n] != -1) { return memo2[n]; }
  if (n == 0) { return memo2[n] = 0; }
  int ret = 1000000;
  for (int i = M-1; i >= 0; --i) {
    if (tetra[i] <= n && tetra[i] % 2 == 1) {
      ret = min(ret, dfs2(n-tetra[i])+1);
    }
  }
  return memo2[n] = ret;
}

int main() {
  memset(memo1, -1, sizeof(memo1));
  memset(memo2, -1, sizeof(memo2));

  int sum = 1;
  tetra[0] = 1;
  FOR(i, 1, M) {
    sum += i+1;
    tetra[i] = tetra[i-1]+sum;
  }

  int n;
  while (scanf("%d", &n), n) {
    printf("%d %d\n", dfs1(n), dfs2(n));
  }
}