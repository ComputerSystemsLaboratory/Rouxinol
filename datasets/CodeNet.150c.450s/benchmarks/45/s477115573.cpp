#include <cstdio>
#include <cmath>

constexpr unsigned long Q = 1000000007;

unsigned long rpow(unsigned long x, int n){
  if(n == 0){
    return 1;
  }
  unsigned long result = rpow(x * x % Q, n / 2);
  if(n % 2 == 0){
    result %= Q;
  } else{
    result = result * x % Q;
  }
  return result;
}

int main(){
  int m, n;
  scanf("%d %d", &m, &n);
  printf("%ld\n", rpow(m, n));
}