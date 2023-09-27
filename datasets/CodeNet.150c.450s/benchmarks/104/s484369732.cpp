#include <iostream>
#include <cstdio>
int array[31];

void swap(int a, int b) {
  int c = array[a];
  array[a] = array[b];
  array[b] = c;
}

int main(void) {
  int w, n, a, b;
  for(int i = 0 ; i < 31 ; i++) {
    array[i] = i;
  }
  scanf("%d %d", &w, &n);
  for(int i = 0 ; i < n ; i++) {
    scanf("%d,%d", &a, &b);
    swap(a, b);
  }
  for(int i = 1 ; i <= w ; i++){
    printf("%d\n", array[i]);
  }
  return 0;
}