#include <stdio.h>


int linerSearch(int A[], int n, int key){
  int i = 0;
  A[n] = key;
  while (A[i] != key) {
    i++;
  }
  return i != n;
}


int main(int argc, char const *argv[]) {
  int n;
  int A[10000+1];
  int q;
  int key;
  int sum= 0;

  scanf("%d", &n);
  for(int i = 0; i < n; i++)  scanf("%d", &A[i]);

  scanf("%d", &q);
  for(int i = 0; i < q; i++)  {
    scanf("%d", &key);
    if (linerSearch(A, n, key))  sum++;
  }
  printf("%d\n", sum);
  return 0;
}