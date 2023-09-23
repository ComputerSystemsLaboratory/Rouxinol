#include <iostream>

using namespace std;

int main() {
  long long int m, n;
  cin >> m >> n;

  long long int res = 1;
  while(n > 0) {
    if(n & 1) {
      res *= m;
    }
    res %= 1000000007;
    m *= m;
    m %= 1000000007;
    n >>= 1;
  }

  cout << res << endl;

  return 0;
}

