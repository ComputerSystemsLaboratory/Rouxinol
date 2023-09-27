/*
 * c.cc: 
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

const int N = 3;

/* typedef */

/* global variables */

int as[N];

/* subroutines */

/* main */

int main() {
  for (int i = 0; i < N; i++) cin >> as[i];
  sort(as, as + N);

  for (int i = 0; i < N; i++) {
    if (i) putchar(' ');
    printf("%d", as[i]);
  }
  putchar('\n');

  return 0;
}