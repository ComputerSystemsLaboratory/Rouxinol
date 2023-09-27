#include <iostream>
#include <algorithm>
   
using namespace std;
   
bool isPrime ( int n )
{
  if (n == 2) { return true; }
  if ((n & 1) == 0) { return false; }
   
  for (int i = 3; (i*i) <= n; i += 2)
  {
    if ((n % i) == 0) { return false; }
  }
   
  return (n != 1);
}
   
int main ( void )
{
  int n, count = 0;
   
  cin >> n;
   
  for (int i = 0; i < n; ++i)
  {
    int p;
   
    cin >> p;
   
    if (isPrime(p)) { ++count; }
  }
   
  cout << count << endl;
   
  return 0;
}