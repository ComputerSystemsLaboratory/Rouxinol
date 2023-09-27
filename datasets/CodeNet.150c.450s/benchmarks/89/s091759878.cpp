#include <iostream>
#include <cstddef>
#include <vector>

using namespace std;

// Sieve of Eratosthenes
// eratosthenes : O(N loglog N)

template <typename OutputIt>
OutputIt eratosthenes(OutputIt it, std::size_t n) {
  for (std::size_t i = 0; i < n; ++i) it[i] = true;
  if (n > 0) it[0] = false;
  if (n > 1) it[1] = false;

  for (std::size_t i = 2; i * i < n; ++i) {
    if (!it[i]) continue;
    for (std::size_t j = i * i; j < n; j += i) it[j] = false;
  }

  return it + n;
}

int a, d, n;

int main() {
  vector<int> v(1000000);
  eratosthenes(v.begin(), 1000000);
  while (true) {
    cin >> a >> d >> n;
    if (a == 0 && d == 0 && n == 0) return 0;
    
    int cnt = 0;
    while (true) {
      cnt += v[a];
      if (cnt == n) break;
      a += d;
    }
    cout << a << endl;
  }
}