#include <cstdint>
#include <iostream>

using namespace std;

constexpr int kMOD = 1000000007;

int64_t pow(int m, int n) {
  if (n == 0) return 1;
  const int64_t r = pow((int64_t)m * m % kMOD, n / 2);
  if (n % 2 == 1) return r * m % kMOD;
  return r;
}

int main() {
  int m, n;
  cin >> m >> n;
  cout << pow(m, n) << endl;
  return 0;
}

