#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <utility>
using namespace std;

#define MAX 1000005

int A[MAX];

int partition(int p, int r) {
  int x = A[r];
  int i = p - 1;
  for ( int j = p; j < r; j++ ) {
    if ( A[j] <= x ) {
      i++;
      swap(A[i], A[j]);
    }
  }
  swap(A[i + 1], A[r]);
  return i + 1;
}

int main() {
  int n;
  int q;

  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    cin >> A[i];
  }

  q = partition(0, n - 1);

  for ( int i = 0; i < n; i++ ) {
    if ( i > 0 ) printf(" ");
    if ( i == q ) printf("[%d]", A[i]);
    else printf("%d", A[i]);
  }
  printf("\n");

  return 0;
}