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

/* subroutines */

/* main */

int main() {
  for (;;) {
    int n, x;
    cin >> n >> x;
    if (n == 0) break;

    int cnt = 0;
    for (int i = 1; i <= n; i++)
      for (int j = i + 1; j <= n; j++) {
	int sij = i + j;
	if (sij + j >= x) break;
	for (int k = j + 1; k <= n; k++) {
	  int sijk = sij + k;
	  if (sijk == x) cnt++;
	  if (sijk > x) break;
	}
      }

    printf("%d\n", cnt);
  }
  return 0;
}