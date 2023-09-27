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
const int MAX_T = 10000;

/* typedef */

/* global variables */

int ys[MAX_N];

/* subroutines */

/* main */

int main() {
  for (;;) {
    int n, a, b, c, x;
    cin >> n >> a >> b >> c >> x;
    if (n == 0) break;

    for (int i = 0; i < n; i++) cin >> ys[i];
    
    int min_t = -1;
    int k = 0;
    
    for (int t = 0; t <= MAX_T; t++) {
      if (x == ys[k]) k++;
      if (k >= n) {
	min_t = t;
	break;
      }

      x = (a * x + b) % c;
    }

    cout << min_t << endl;
  }

  return 0;
}