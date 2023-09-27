#include <iostream>

using namespace std;

long long modPow(long long a, long long n, long long p) {
  if (n == 0) return 1; // 0乗にも対応する場合
  if (n == 1) return a % p;
  if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p;
  long long t = modPow(a, n / 2, p);
  return (t * t) % p;
}

int main()
{
    long long m, n;
    cin >> m >> n;
    cout << modPow(m, n, 1000000007) << endl;
    return 0;
}
