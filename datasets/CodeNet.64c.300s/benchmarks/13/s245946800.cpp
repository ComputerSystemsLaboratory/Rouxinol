#include <stdio.h>
#include <stdlib.h>
#define N 45
 
int f[N];
int fib(int);

int main(){
  int n,i;
  
  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}
 
int fib(int n){
  if(n==0 || n==1) return f[n]=1;
  if(f[n]!=NULL) return f[n];
  return f[n]=fib(n-2)+fib(n-1);
}