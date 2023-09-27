#include <iostream>
#include <cstdio>

int A[10001];

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &A[i]);
  }
  
  int q, key, sum = 0;
  scanf("%d", &q);
  for (int i = 0; i < q; ++i) {
    scanf("%d", &key);
    A[n] = key;
    int j;
    for (j = 0; j < n; ++j) {
      if (A[j] == key) { break; }
    }
    if (n != j) { sum++; }
  }
  
  printf("%d\n", sum);
  return 0;
  
}