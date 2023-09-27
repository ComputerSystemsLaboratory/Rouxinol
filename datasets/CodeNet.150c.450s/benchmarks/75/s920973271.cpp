#include<stdio.h>
#include<stdlib.h>
#define N 500001
void maxHeap(int);
void buildMaxHeap(void);
void swap(int *, int *);
int n, heap[N];
int main() {
  int i, j;
  
  scanf("%d", &n);
  
  for (i = 1; i <= n; i++) scanf("%d", &heap[i]);
  
  buildMaxHeap();
  
  for (i = 1; i <= n; i++) printf(" %d",heap[i]);
  printf("\n");

  return 0;
}
void maxHeap(int u) {
  int left = 2 * u;
  int right = left + 1;
  int max;
  
  if (left <= n && heap[u] < heap[left]) max = left;
  else max = u;
  if (right <= n && heap[max] < heap[right]) max = right;
  
  if (u != max) {
    swap(&heap[u], &heap[max]);
    maxHeap(max);
  }
}
void buildMaxHeap(void) {
  int i;
  for (i = n; i > 0; i--) maxHeap(i);
}
void swap(int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}