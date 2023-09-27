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

const int MAX_N = 200000;
const int INF = 1 << 30;

/* typedef */

/* global variables */

int rs[MAX_N];

/* subroutines */

/* main */

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) cin >> rs[i];

  int maxd = -INF, minr = rs[0];
  for (int i = 1; i < n; i++) {
    int d = rs[i] - minr;
    if (maxd < d) maxd = d;
    if (minr > rs[i]) minr = rs[i];
  }

  printf("%d\n", maxd);
  return 0;
}