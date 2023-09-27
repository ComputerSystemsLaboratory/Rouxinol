#include<stdio.h>

int numberOfCar(long p, int n, int w[]) {
  long car = p;
  int count = 1;
  for (int i = 0; i < n; i++) {
    if (p < w[i]) return n+1;
    if (car - w[i] < 0) {
      count++;
      car = p;
      i--;
    } else {
      car -= w[i];
    }
  }
  return count++;
}

int main() {
	int n,k;
  scanf("%d %d", &n, &k);
  int w[n];
  for ( int i = 0; i < n; i++ ) scanf("%d", &w[i]);

  long left = 0L;
  long right = 100000*100000L;
  while (left != right) {
    long mid = (left+right)/2;
    if (numberOfCar(mid, n, w) <= k) {
      right = mid;
    } else {
      left = mid+1;
    }
  }

  printf("%lu\n", left);

  return 0;
}

