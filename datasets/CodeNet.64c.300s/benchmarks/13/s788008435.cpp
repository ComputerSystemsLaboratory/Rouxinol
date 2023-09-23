#include <iostream>

using namespace std;

int main(){
  int n;
  unsigned long long fib[50];
  
  fib[0] = 1;
  fib[1] = 1;

  cin >> n;

  for(int i = 2;i <= n;i++){
    fib[i] = fib[i-1] + fib[i-2]; 
  }

  cout << fib[n] << endl;

  return 0;
}