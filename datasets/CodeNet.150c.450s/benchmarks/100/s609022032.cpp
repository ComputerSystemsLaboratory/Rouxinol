#include <iostream>

using namespace std;
long long fact(int n) {
  if (n < 1 || n > 20) return 0;
  if (n == 1) return 1;
  else return fact(n - 1) * (long long)n;
}

int main() {
  int n;
  cin >> n;
  if (fact(n))
    cout << fact(n) << endl;
  return 0;
}