#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  
  int n, fib[50] = {1, 1};

  //recurrence relation of fibonacci number
  for(int i = 2;i < 45;i++) fib[i] = fib[i - 1] + fib[i - 2];

  //input and output
  cin >> n;
  cout << fib[n] << endl;
  
  return 0;
}


