#include <iostream>
using namespace std;

bool t[1000000] = {};

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
  int n, i, r;
  n = 999999;

  for (i = 0; i < n; i++) {
    t[i] = is_prime(i);
  }

  while (cin >> n) {
    r = 0;
    for (i = 2; i <= n; i++) {
      if (t[i]) {
        r++;
      }
    }
    cout << r << endl;
  }

  return 0;
}