#include <iostream>
using namespace std;

int gcd(int m, int n) {
  while (m != n) {
    if (m > n) {
      m = m - n;
    } else {
      n = n - m;
    }
  }
  return m;
}

int lcm(int m, int n) {
  return (m / gcd(m, n)) * n;
}

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  int a, b;

  while (cin >> a, cin >> b) {
    cout << gcd(a, b) << " " << lcm(a, b) << endl;
  }

  return 0;
}