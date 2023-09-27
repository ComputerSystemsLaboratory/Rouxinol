#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<int, int> factorize(int n) {
  map<int, int> m;
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      ++m[i];
      n /= i;
    }
  }
  if (n != 1) m[n] = 1;
  return m;
}

int main() {
  int n;
  cin >> n;
  cout << n << ":";
  for (auto p : factorize(n)) {
    for (int i = 0; i < p.second; i++) {
      cout << " " << p.first;
    }
  }
  cout << endl;
  return 0;
}

