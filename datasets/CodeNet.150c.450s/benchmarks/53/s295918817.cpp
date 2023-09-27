#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, m;
  cin >> n;
  m = n;
  cout << n << ':';

  for (int i = 2; i * i < m; i++) {
    while (n % i == 0) {
      cout << ' ' << i;
      n /= i;
    }
  }

  if (n > 1) {
    cout << ' ' << n;
  }

  cout << endl;
  return 0;
}