#include <iostream>

using namespace std;

int fibo[60] = {};

int fib(int n){
fibo[0] = 1;
fibo[1] = 1;
  for(int i = 2;i <= n;i++) fibo[i] = fibo[i - 1] + fibo[i - 2];
return fibo[n];
}

int main(){

  int n;
  cin >> n;
  cout << fib(n) << endl;

}