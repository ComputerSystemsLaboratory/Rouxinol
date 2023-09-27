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

const int MAX_N = 10000;
const int MAX_P = 10;

/* typedef */

/* global variables */

int n, m;
int rds[MAX_P + 1];

/* subroutines */

/* main */

int main() {
  for (;;) {
    cin >> n >> m;
    if (n == 0) break;

    memset(rds, 0, sizeof(rds));
    
    for (int i = 0; i < n; i++) {
      int di, pi;
      cin >> di >> pi;
      rds[pi] += di;
    }

    for (int p = MAX_P; p >= 0; p--) {
      if (m >= rds[p]) {
	m -= rds[p];
	rds[p] = 0;
      }
      else {
	rds[p] -= m;
	break;
      }
    }

    int sum = 0;
    for (int p = 0; p <= MAX_P; p++)
      sum += rds[p] * p;

    cout << sum << endl;
  }

  return 0;
}