#include<stdio.h>

int n, A[20];

bool exhaustiveSearch(int i, int m) {
  if ( m == 0 ) return true;
  if ( i >= n ) return false;
  return exhaustiveSearch(i + 1, m) || exhaustiveSearch(i + 1, m - A[i]);
}

int main() {
  int q, m;

  scanf("%d", &n);
  for ( int i = 0; i < n; i++ ) scanf("%d", &A[i]);

  scanf("%d", &q);

  for ( int i = 0; i < q; i++ ) {
    scanf("%d", &m);
    if (exhaustiveSearch(0, m)) printf("yes\n");
    else printf("no\n");
  }
}

