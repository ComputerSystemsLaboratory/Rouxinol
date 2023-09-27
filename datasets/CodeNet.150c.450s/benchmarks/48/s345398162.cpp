#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
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
  for (;;) {
    int e;
    cin >> e;
    if (e == 0) break;

    int min_m = e;

    for (int z = 0; z * z * z <= e; z++) {
      int ez = e - z * z * z;
      for (int y = 0; y * y <= ez; y++) {
	int x = ez - y * y;
	int m = x + y + z;
	if (min_m > m) min_m = m;
      }
    }

    cout << min_m << endl;
  }

  return 0;
}