#include <iostream>
#define rep(i,a) for(int i=0;i<(a);++i)

int fib[45];
int n;

int main()
{
  std::cin >> n;

  fib[0] = fib[1] = 1;
  rep( i, n-1 )
    fib[i+2] = fib[i] + fib[i+1]; 

  std::cout << fib[n] << std::endl;

  return 0;
}