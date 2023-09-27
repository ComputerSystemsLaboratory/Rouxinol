/*
 * d.cc: 
 */

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>

using namespace std;

/* constant */

const int MAX_N = 100000;
const int MAX_K = 100000;

/* typedef */

/* global variables */

int wis[MAX_N], wsums[MAX_N + 1];

/* subroutines */

bool ok(int n, int k, int p) {
  int prvsum = 0, c = 0;
  for (int i = 1; i <= n; i++) {
    if (wsums[i] - prvsum > p) {
      prvsum = wsums[i - 1];
      if (++c >= k) return false;
    }
  }
  return true;
}

/* main */

int main() {
  int n, k;
  cin >> n >> k;

  int maxwi = 0;
  wsums[0] = 0;

  for (int i = 0; i < n; i++) {
    cin >> wis[i];
    if (maxwi < wis[i]) maxwi = wis[i];
    wsums[i + 1] = wsums[i] + wis[i];
  }
  //printf("maxwi=%d\n", maxwi);

  int p0 = maxwi - 1, p1 = wsums[n] + 1;
  while (p0 + 1 < p1) {
    int p = (p0 + p1) / 2;
    if (ok(n, k, p)) p1 = p;
    else p0 = p;
  }

  printf("%d\n", p1);
  return 0;
}