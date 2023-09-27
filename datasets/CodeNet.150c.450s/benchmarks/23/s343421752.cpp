#include <stdio.h>

 int F[44];
 int fib(int);

 int main(){

   int n;

   scanf("%d",&n);

   printf("%d\n",fib(n));

   return 0;

 }

int fib(int n){

  if(n==0 || n==1)return F[n]=1;

  if(F[n]>1)return F[n];

  return F[n]=fib(n-2)+fib(n-1);

}