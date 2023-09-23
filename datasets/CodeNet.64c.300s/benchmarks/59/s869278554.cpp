#include <cmath>
#include <iostream>

using namespace std;

typedef unsigned int uint32;

namespace {
bool IsPrime(uint32 x) {
  if (x == 2) {
    return true;
  }
  if (x % 2 == 0) {
    return false;
  }

  const uint32 m = static_cast<uint32>(sqrt(x));
  for (size_t i = 3; i <= m; ++i) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}
} // namespace

int main() {
  uint32 n;
  cin >> n;

  uint32 c = 0;
  uint32 x;
  for (uint32 i = 0; i < n; ++i) {
    cin >> x;
    if (IsPrime(x)) {
      ++c;
    }
  }
  cout << c << endl;
  return 0;
}