#include <iostream>

using namespace std;

int num[47];

int fib(int n){
  if(num[n]!=0)return num[n];
  else return num[n] = fib(n-1) + fib(n-2);
}

int main(){
  int n;
  cin >> n;
  num[0] = 1;
  num[1] = 1;
  n = fib(n);
  cout << n << endl;
  return 0;
}

