#include <bits/stdc++.h>
using namespace std;

void makeFibonacci(int fib[]){
  fib[0] = 1;
  fib[1] = 1;
  for(int i=2; i<=44; i++){
    fib[i] = fib[i-1] + fib[i-2];
  }
}

int main(){

  int fib[45];
  makeFibonacci(fib);

  int n;
  scanf("%d", &n);
  printf("%d\n", fib[n]);

  return 0;
}

