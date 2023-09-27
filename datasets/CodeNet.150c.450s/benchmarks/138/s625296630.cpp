/*
 * b.cc: 
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

/* typedef */

/* global variables */

int gcd(int x, int y) {
  return (y == 0) ? x : gcd(y, x % y);
}

/* subroutines */

/* main */

int main() {
  int a, b;
  cin >> a >> b;

  if (a < b) swap(a, b);

  int ans = gcd(a, b);
  printf("%d\n", ans);

  return 0;
}