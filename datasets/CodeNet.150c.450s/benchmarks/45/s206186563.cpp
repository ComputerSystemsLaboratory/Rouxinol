#include <iostream>
using namespace std;
#define M 1000000007

long pow(long long x,long long n) {
  if (n == 0)
    return 1;
  else if (n % 2 == 0)
    return (pow(x % M * x % M, n/2)% M);
  else if (n % 2 != 0)
    return (pow(x % M * x % M,n/2) % M * x % M);
}

int main() {
  long long m,n;
  cin >> m >> n;
  cout << pow(m,n) % M << endl;
}