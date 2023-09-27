/*  -*- coding: utf-8 -*-
 *
 * 1608.cc: Selection of Participants of an Experiment
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

const int MAX_N = 1000;
const int INF = 1 << 30;

/* typedef */

/* global variables */

int as[MAX_N];

/* subroutines */

/* main */

int main() {
  for (int n; scanf("%d", &n) > 0 && n > 0;) {
    for (int i = 0; i < n; i++) scanf("%d", as + i);
    sort(as, as + n);

    int mind = INF;
    for (int i = 1; i < n; i++) {
      int d = as[i] - as[i - 1];
      if (mind > d) mind = d;
    }

    printf("%d\n", mind);
  }

  return 0;
}

