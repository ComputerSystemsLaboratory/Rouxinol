#include <algorithm>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
  if (a < b) swap(a, b);

  while (a % b > 0) {
    swap(a, b);
    b = b % a;
  }

  return b;
}

int main() {
  int a, b; cin >> a >> b;

  cout << gcd(a, b) << endl;
}