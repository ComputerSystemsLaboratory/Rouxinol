#include <stdio.h>
long long fact(long long n){ return n>0 ? fact(n-1)*n : 1LL; }
int main(){
  long long n;
  scanf("%lld",&n);
  printf("%lld\n",fact(n));
  return 0;
}