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

const int MAX_N = 100000;

/* typedef */

/* global variables */

int as[MAX_N];

/* subroutines */

int partition(int A[], int p, int r) {
  int x = A[r];
  int i = p-1;
  for (int j = p; j < r; j++)
    if (A[j] <= x) {
      i++;
      swap(A[i], A[j]);
    }
  i++;
  swap(A[i], A[r]);
  return i;
}

/* main */

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> as[i];

  int k = partition(as, 0, n - 1);

  for (int i = 0; i < n; i++) {
    if (i) putchar(' ');
    if (i == k) printf("[%d]", as[i]);
    else printf("%d", as[i]);
  }
  putchar('\n');

  return 0;
}