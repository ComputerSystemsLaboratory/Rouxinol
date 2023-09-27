#include <stdio.h>
#define N 44

int Fib[N];

void fib(int n){
  int i;
  Fib[0] = 1;
  Fib[1] = 1;
  for(i=2; i<=n; i++) Fib[i] = Fib[i-1] + Fib[i-2];
}

int main(){
  int n;

  scanf("%d",&n);
  fib(n);
  printf("%d\n",Fib[n]);

  return 0;
}