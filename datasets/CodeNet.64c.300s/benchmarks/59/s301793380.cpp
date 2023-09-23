#include <iostream>
using namespace std;

int is_prime(int n) {
  int i;

  for (i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int n, m, c = 0;

  cin >> n;
  while (n--) {
    cin >> m;
    if (is_prime(m)) {
      c++;
    }
  }

  cout << c << endl;

  return 0;
}