#include <iostream>

using namespace std;

long long int factorial(long long int n)
{
  if(n > 0) 
    return n * factorial(n - 1);
  else
    return 1;
}

int main()
{
  long long int n;
  cin >> n;
  cout << factorial(n) << endl;
}