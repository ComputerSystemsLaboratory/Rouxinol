#include <bits/stdc++.h>
using namespace std;

map<int, int> prime_factor(long long n) {
  map<int, int> res;
  for (int i = 2; i * i <= n; ++i) {
    while (n % i == 0) {
      ++res[i];
      n /= i;
    }
  }

  if (n != 1) res[n] = 1;
  return res;
}

int main() {
  int n;
  cin >> n;

  map<int, int> m = prime_factor(n);

  cout << n << ":";
  for (auto i : m) {
    for (int j = 0; j < i.second; ++j) {
      cout << " " << i.first;
    }
  }
  cout << endl;
}