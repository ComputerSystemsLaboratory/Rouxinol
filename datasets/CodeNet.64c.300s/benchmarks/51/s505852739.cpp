#include <iostream>

using namespace std;

int main() {
  long long n, r = 1;
  cin >> n;
  for (; n > 1; n--)
    r *= n;
  cout << r << endl;
  return 0;
}