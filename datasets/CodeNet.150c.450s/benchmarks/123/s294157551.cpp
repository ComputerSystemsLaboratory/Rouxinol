#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

bool is_prime(int x) {
  auto n = static_cast<int>(sqrt(x)) + 1;
  if (x % 2 == 0 && x != 2) {
    return false;
  }
  for (int i = 3; i < n; i += 2) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int main(int ac, char **av) {
  int n;
  while (cin >> n, n) {
    vector<int> a;
    for (int i = 0; i < n; i++) {
      int t;
      cin >> t;
      a.push_back(t);
    }
    auto count = 0;
    for (auto it = begin(a); it != end(a); it++) {
      count += is_prime(*it) ? 1 : 0;
    }
    cout << count << endl;
    n = 0;
  }
  return 0;
}