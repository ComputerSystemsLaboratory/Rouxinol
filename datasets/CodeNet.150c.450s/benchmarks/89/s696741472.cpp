#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
  int a, d, n;
  vector<bool> prime(1000100, true);
  prime[0] = prime[1] = false;
  for (unsigned int i = 2; i < prime.size(); i++) {
    if (prime[i]) {
      for (unsigned int j = 2 * i; j < prime.size(); j += i) {
	prime[j] = false;
      }
    }
  }
  
  while (cin >> a >> d >> n, a + d + n) {
    int sum = 0;
    while (1) {
      if (prime[a]) sum++;
      if (sum == n && prime[a]) {
	cout << a << endl;
	break;
      }
      a += d;
    }
  }
    return 0;
}