#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> fib(n + 5);

  fib[0] = 1;
  fib[1] = 1;

  for(int i = 2; i <= n; i++) fib[i] = fib[i-2] + fib[i-1];

  cout << fib[n] << endl;; 

  return 0;

}

