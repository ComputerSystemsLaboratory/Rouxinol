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
    int n;
    cin >> n;
    if (n == 0) break;

    int count = 0;
    for (int b = 2; 2 * b - 1 <= n; b++) {
      int b2 = b * (b + 1) / 2;
      for (int a = 1; a < b; a++) {
	int a2 = a * (a - 1) / 2;
	if (b2 - a2 == n) count++;
      }
    }

    cout << count << endl;
  }

  return 0;
}