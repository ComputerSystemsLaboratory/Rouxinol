#include <stdio.h>

#define MAX_N 10000
#define MAX_Q 500


void trace(int* x, int n) {
  for(int i=0; i<n; i++) {
    printf("%d", x[i]);
    if(i != n-1) {
      printf(" ");
    }
  }
  printf("\n");
}

int linear_search(int* arr, int n, int v) {
  for(int i=0; i<n; i++) {
    if(arr[i] == v) {
      return i;
    }
  }
  return -1;
}

int main() {
  int n, q;
  int s[MAX_N], t[MAX_Q];

  scanf("%d", &n);
  for(int i=0; i<n; i++) {
    scanf("%d", &s[i]);
  }

  scanf("%d", &q);
  for(int i=0; i<q; i++) {
    scanf("%d", &t[i]);
  }

  int c = 0;
  for(int i=0; i<q; i++) {
    if(linear_search(s, n, t[i]) != -1) {
      c++;
    }
  }
  printf("%d\n", c);

  return 0;
}