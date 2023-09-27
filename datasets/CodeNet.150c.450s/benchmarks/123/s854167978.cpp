#include <cmath>
#include <iostream>

using namespace std;

static bool IsPrime(int x) {
  if (1 < x && x < 4)
    return true;
  const int z = static_cast<int>(ceil(sqrt(x)));
  for (int i = 2; i <= z; ++i) {
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