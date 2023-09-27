#include<stdio.h>
#include<stdlib.h>

#define N 100,000

int partition(int *, int, int);

int main(){

  int i;
  int n, q;
  int *a;

  scanf("%d", &n);

  a = (int *)malloc(sizeof(int) * n);

  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  q = partition(a, 0, n - 1);


  for( i = 0; i < n; i++){
    if(q == i) printf("[");
    printf("%d", a[i]);
    if(q == i) printf("]");
    if(i != n - 1) printf(" ");
  }
	   
  printf("\n");

  return 0;
}

int partition(int *a, int p, int r){

  int i, j, x;
  int tmp;

  x = a[r];

  i = p - 1;

  for(j = p; j < r; j ++){
    if(a[j] <= x){
      i = i + 1;
      tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
  }

  tmp = a[i + 1];
  a[i + 1] = a[r];
  a[r] = tmp;

  return i + 1;
}