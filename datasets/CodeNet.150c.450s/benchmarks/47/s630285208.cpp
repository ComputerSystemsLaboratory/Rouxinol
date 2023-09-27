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

/* typedef */

/* global variables */

/* subroutines */

/* main */

int main() {
  int w, h, x, y, r;
  cin >> w >> h >> x >> y >> r;

  bool ok = (x - r >= 0 && x + r <= w && y - r >= 0 && y + r <= h);
  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}