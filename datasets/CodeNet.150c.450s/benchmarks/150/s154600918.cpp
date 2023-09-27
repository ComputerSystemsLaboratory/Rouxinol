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

const int MAX_N = 2000000;
const int MAX_A = 10000;

/* typedef */

/* global variables */

int as[MAX_N], bs[MAX_N], cs[MAX_A + 1];

/* subroutines */

/* main */

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> as[i];

  //Counting-Sort(A, B, k)
  for (int i = 0; i <= MAX_A; i++) cs[i] = 0;
  for (int j = 0; j < n; j++) cs[as[j]]++;
  for (int i = 1; i <= MAX_A; i++) cs[i] += cs[i - 1];
  for (int j = n - 1; j >= 0; j--) {
    cs[as[j]]--;
    bs[cs[as[j]]] = as[j];
  }

  for (int i = 0; i < n; i++) {
    if (i) putchar(' ');
    printf("%d", bs[i]);
  }
  putchar('\n');
  return 0;
}