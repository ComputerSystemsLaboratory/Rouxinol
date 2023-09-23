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

  // SelectionSort(A)
  for (int i = 0; i < n; i++) {
    int mini = i;
    for (int j = i; j < n; j++)
      if (as[j] < as[mini]) mini = j;
    if (i != mini) {
      swap(as[i], as[mini]);
      cnt++;
    }
  }

  for (int i = 0; i < n; i++) {
    if (i) putchar(' ');
    printf("%d", as[i]);
  }
  putchar('\n');
  printf("%d\n", cnt);

  return 0;
}