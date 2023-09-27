#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int gcd(int n, int m) {
  while (m) {
    auto t = n % m;
    n = m;
    m = t;
  }
  return n;
}

int main(int ac, char **av) {
  int n, m;
  while (cin >> n >> m, n) {
    cout << gcd(n, m) << endl;
    n = m = 0;
  }
  return 0;
}