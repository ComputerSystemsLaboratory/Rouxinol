#include<stdio.h>

int main() {
  int n, S[10000], q, t, sum = 0;

  scanf("%d", &n);
  for ( int i = 0; i < n; i++ ) scanf("%d", &S[i]);
  scanf("%d", &q);
  for ( int i = 0; i < q; i++ ) {
    scanf("%d", &t);
    for ( int j = 0; j < n; j++ ) {
      if (S[j] == t) {
        sum++;
        break;
      }
    }
  }

  printf("%d\n", sum);
  return 0;
}

