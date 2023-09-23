#include <iostream>
using namespace std;

int pow(long long m, long long n);

int main()
{
  long long m, n;
  cin >> m >> n;

  cout << pow(m, n) % 1000000007 << endl;

  return 0;
}

int pow(long long m, long long n)
{
  long long p = 1000000007;
  if (n == 1) return m;

  if (n % 2 == 1){
    return ((pow(m % p * m % p, n / 2)) % p * m % p);
  }
  return ((pow(m % p * m % p, n / 2) % p));
}