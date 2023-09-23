#include<stdio.h>
 
#define Max 45
 
int F[Max];
 
int fibonacci(int n){
  if( n == 0 || n == 1)
    return F[n] = 1;
  if( F[n] != NULL ) 
    return F[n];
  return F[n] = fibonacci(n - 2) + fibonacci(n - 1);
}
 
int main(){
 
  int n, i, A;
 
  scanf("%d",&n);
 
  for( i = 0 ; i <= n  ; i++)
    A = fibonacci(i);
 
  printf("%d\n",A);
 
  return 0;
}