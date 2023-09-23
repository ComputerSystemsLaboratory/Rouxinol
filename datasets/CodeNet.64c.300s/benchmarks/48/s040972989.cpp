#include <stdio.h>

const int MAX_V = 1000000;
int prime[MAX_V+1];
int a[MAX_V] = {'0'};
int sum[MAX_V+1];
int main() {
  int i, k, v, j, m, n;
  for(i = 2; i <= MAX_V; i++) {
    prime[i] = 1;
  }
  for(i = 2; i*i <= MAX_V; i++) {
    if(prime[i]) {
      for(k = 2 * i; k <= MAX_V; k += i) {
        prime[k] = 0;
      }
    }
  }
  sum[0] = 0;
  for(m = 0; m < MAX_V; m++) {
    sum[m+1] = sum[m] + prime[m];
  }
  while( scanf( "%d", &n ) != EOF ) {
    for( j = 2; j <= n; j++ ) {
      int isprime = prime[j];
      int isprimee = prime[j-2];
    }
    printf( "%d\n", sum[n+1] );
  }
  return 0;
}