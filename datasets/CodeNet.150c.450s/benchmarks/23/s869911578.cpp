#include <iostream>

using namespace std;
static const int INI =  -1;
 int f[66];

int fib(int n){

  if(n == 0 || n == 1) return f[n] = 1;
  else if(f[n] != INI) return f[n];
  return f[n] =  fib(n - 1) + fib(n - 2);
}

int main(){

 
  int n;
  for(int i = 0;i <= 66; i++){
    f[i] = INI;
  }

  cin >> n;

  cout << fib(n) << endl;
}