#include <cmath>
#include <iostream>

using namespace std;

static bool IsPrime(int x) {
  if (x < 2)
    return false;
  if (x == 2)
    return true;
  if (x % 2 == 0)
    return false;

  const int z = static_cast<int>(ceil(sqrt(x)));
  for (int i = 3; i <= z; i += 2) {
    if (x % i == 0)
      return false;
  }
  return true;
}

int main() {
  int n;

  cin >> n;

  int cnt = 0;
  int x;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    if (IsPrime(x))
      ++cnt;
  }
  cout << cnt << endl;
  return 0;
}