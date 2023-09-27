#include <iostream>

int Fib[45];

int main(){
  int n;
  std::cin >> n;
  Fib[0]=Fib[1]=1;

  for(int i=2; i<=n; i++){
    Fib[i] = Fib[i-1]+Fib[i-2];
  }
  std::cout << Fib[n] << std::endl;

  return 0;
}

