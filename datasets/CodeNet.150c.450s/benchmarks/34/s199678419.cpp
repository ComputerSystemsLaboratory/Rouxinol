#include <iostream>
#include <cstring>
using namespace std;

int fib[100];

int fibonacci(int n){
  if(!fib[n]) fib[n] = fibonacci(n-1) + fibonacci(n-2) + fibonacci(n-3);
  return fib[n];
}

int main(){
  int n;
  memset(fib, 0, sizeof(fib));
  fib[0] = fib[1] = 1;
  fib[2] = 2;
  while((cin >> n), n){
    cout << (fibonacci(n)/3650 + 1) << endl;
  }
  return 0;
}