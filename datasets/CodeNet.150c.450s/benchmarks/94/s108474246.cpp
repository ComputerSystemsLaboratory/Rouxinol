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

const int MAX_N = 100;

/* typedef */

/* global variables */

int as[MAX_N];

/* subroutines */

/* main */

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) cin >> as[i];

  int cnt = 0;

  // Bubble sort
  for (int i = 0; i < n; i++)
    for (int j = n - 1; j >= i + 1; j--)
      if (as[j] < as[j - 1]) {
	swap(as[j], as[j-1]);
	cnt++;
      }

  for (int i = 0; i < n; i++) {
    if (i) putchar(' ');
    printf("%d", as[i]);
  }
  putchar('\n');
  printf("%d\n", cnt);

  return 0;
}