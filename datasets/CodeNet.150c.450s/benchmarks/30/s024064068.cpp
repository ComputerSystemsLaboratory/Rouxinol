#include<stdio.h>
#define N 100

void swap(int*, int*);
void pr(int*, int);

int main(){
  int n, i, j, k;
  int t=0; // times
  int mini;
  int a[N];

  scanf("%d", &n);
  for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

  for( i = 0 ; i < n ; i++){
    mini = i;
    for(j = i ; j < n ; j++){
      if( a[j] < a[mini] ){
	mini = j;
      }
    }
    if( i != mini){
      swap(&a[i] ,&a[mini]);
      t++;
    }
  }

  pr(a,n);
  printf("%d\n" ,t);
  return 0;
}

void swap(int *a_p, int *b_p){
  int k;
  k    = *a_p;
  *a_p = *b_p;
  *b_p = k;
}

void pr(int *a_p, int n){
  int i;
  for( i = 0 ; i < n-1 ; i++ ){
    printf("%d " ,a_p[i]);
  }
  printf("%d" , a_p[n-1]);
  printf("\n");
}