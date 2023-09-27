#include <iostream>
using namespace std;

const int MAX = 44;
int F[MAX];

int fibonacci_dp(int n)
{
  F[0] = F[1] = 1;
  for(int i = 2; i <= n; i++)
    F[i] = F[i - 2] + F[i - 1];
  return F[n];
}
  
int main()
{
  int n;
  cin >> n;
  cout << fibonacci_dp(n) << endl;
}