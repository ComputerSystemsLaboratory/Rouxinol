#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int fib[45];
  fib[0]=1;
  fib[1]=1;
  for(int i=2;i<45;i++){
    fib[i]=fib[i-1]+fib[i-2];
  }

  int n;
  scanf("%d",&n);

  printf("%d\n",fib[n]);
}