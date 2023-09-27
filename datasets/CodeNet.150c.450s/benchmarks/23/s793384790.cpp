#include <stdio.h>
int fib(int);
int fibo[45];
int main(){
  int n,i;
  for(i=0;i<45;i++)fibo[i]=-1;
  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}
int fib(int n){
  if(n==0 || n==1)return fibo[n]=1;
  if(fibo[n]!=-1)return fibo[n];
  return fibo[n]=fib(n-1)+fib(n-2);
}

