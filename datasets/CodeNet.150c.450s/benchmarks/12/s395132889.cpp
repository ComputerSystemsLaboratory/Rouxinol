#include<stdio.h>
#include<stdlib.h>
#define N 5000000
void print(int);
int n, tree[N];

int main() {
  int i, j;
  
  scanf("%d", &n);
  
  for (i = 1; i <= n; i++) scanf("%d", &tree[i]);
  for (i = 1; i <= n; i++) print(i);
  return 0;
}
void print(int u) {
  int right = u * 2 + 1;
  int left = u * 2;
  int parent = u / 2;
  printf("node %d: key = %d, ", u, tree[u]);
  if (1 < u) printf("parent key = %d, ", tree[parent]);
  if (left <= n) printf("left key = %d, ",tree[left]); 
  if (right <= n) printf("right key = %d, ", tree[right]);
  printf("\n");
}