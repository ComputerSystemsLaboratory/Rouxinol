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

const int MAX_H = 500000;
const int INF = 2147483647;

/* typedef */

/* global variables */

int as[MAX_H];

/* subroutines */

void max_heapify(int h, int A[], int i) {
  int l = i * 2 + 1;
  int r = i * 2 + 2;

  int largest = i;
  if (l < h && A[l] > A[largest]) largest = l;
  if (r < h && A[r] > A[largest]) largest = r;

  if (largest != i) {
    swap(A[i], A[largest]);
    max_heapify(h, A, largest);
  }
}

void build_max_heap(int h, int A[]) {
  for (int i = (h - 1) / 2; i >= 0; i--)
    max_heapify(h, A, i);
}
  
/* main */

int main() {
  int h;
  cin >> h;

  for (int i = 0; i < h; i++) cin >> as[i];

  build_max_heap(h, as);

  for (int i = 0; i < h; i++) printf(" %d", as[i]);
  putchar('\n');

  return 0;
}