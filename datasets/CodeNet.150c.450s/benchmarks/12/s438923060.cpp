/*
 * a.cc: 
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

const int MAX_H = 250;

/* typedef */

/* global variables */

int as[MAX_H];

/* subroutines */

/* main */

int main() {
  int h;
  cin >> h;

  for (int i = 0; i < h; i++) cin >> as[i];

  for (int i = 0; i < h; i++) {
    printf("node %d: key = %d, ", i + 1, as[i]);
    if (i > 0) printf("parent key = %d, ", as[(i - 1) / 2]);
    int i0 = i * 2 + 1, i1 = i0 + 1;
    if (i0 < h) printf("left key = %d, ", as[i0]);
    if (i1 < h) printf("right key = %d, ", as[i1]);
    putchar('\n');
  }
  return 0;
}