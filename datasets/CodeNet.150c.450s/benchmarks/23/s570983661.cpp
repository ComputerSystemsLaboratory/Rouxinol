#include<bits/stdc++.h>
using namespace std;

#define N 45

int main(void){
  int n, fib[N];
  
  fib[0]=fib[1]=1;
  
  for(int i=2; i<=N; i++) fib[i]=fib[i-1]+fib[i-2];
  
  scanf("%d", &n);
  printf("%d\n", fib[n]);
  
  return 0;
}

