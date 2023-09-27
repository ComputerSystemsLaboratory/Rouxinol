#include <stdio.h>

long long int fact(long long int n){
  return (n==0)? 1 : n*fact(n-1);
}

int main(){
  long long int n;
  scanf("%lld", &n);
  printf("%lld\n", fact(n));
}