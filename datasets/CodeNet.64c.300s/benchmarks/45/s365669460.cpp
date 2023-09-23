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

const int MAX_N = 100;

/* typedef */

/* global variables */

int n, m, p;
int xis[MAX_N];

/* subroutines */

/* main */

int main() {
  for (;;) {
    cin >> n >> m >> p;
    if (n == 0) break;
    m--;

    int sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> xis[i];
      sum += xis[i];
    }

    int d = (xis[m] == 0) ? 0 : (double)(sum * (100 - p)) / xis[m];
    cout << d << endl;
  }
  
  return 0;
}