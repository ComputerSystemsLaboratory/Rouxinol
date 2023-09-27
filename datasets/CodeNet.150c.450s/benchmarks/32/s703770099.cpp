/*  -*- coding: utf-8 -*-
 *
 * 1600.cc: Entrance Examination
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

const int MAX_M = 200;

/* typedef */

/* global variables */

int ps[MAX_M];

/* subroutines */

/* main */

int main() {
  for (;;) {
    int m, nmin, nmax;
    scanf("%d%d%d", &m, &nmin, &nmax);
    if (m == 0) break;

    for (int i = 0; i < m; i++) scanf("%d", ps + i);

    int maxg = -1, n = -1;
    for (int i = nmax; i >= nmin; i--) {
      int g = ps[i - 1] - ps[i];
      if (maxg < g) maxg = g, n = i;
    }

    printf("%d\n", n);
  }
  return 0;
}

