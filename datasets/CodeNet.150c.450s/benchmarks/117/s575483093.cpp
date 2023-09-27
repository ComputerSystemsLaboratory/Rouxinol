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

const int MAX_N = 500000;
const int INF = 1 << 30;

/* typedef */

/* global variables */

int as[MAX_N], L[MAX_N + 1], R[MAX_N + 1];

/* subroutines */

int merge(int A[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  //create array L[0...n1], R[0...n2]
  for (int i = 0; i < n1; i++) L[i] = A[left + i];
  for (int i = 0; i < n2; i++) R[i] = A[mid + i];
  L[n1] = INF;
  R[n2] = INF;
  int i = 0, j = 0, cnt = 0;
  for (int k = left; k < right; k++) {
    cnt++;
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    }
    else {
      A[k] = R[j];
      j++;
    }
  }
  return cnt;
}

int merge_sort(int A[], int left, int right) {
  int cnt = 0;
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    cnt += merge_sort(A, left, mid);
    cnt += merge_sort(A, mid, right);
    cnt += merge(A, left, mid, right);
  }
  return cnt;
}

/* main */

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> as[i];

  int cnt = merge_sort(as, 0, n);

  for (int i = 0; i < n; i++) {
    if (i) putchar(' ');
    printf("%d", as[i]);
  }
  printf("\n%d\n", cnt);
  return 0;
}