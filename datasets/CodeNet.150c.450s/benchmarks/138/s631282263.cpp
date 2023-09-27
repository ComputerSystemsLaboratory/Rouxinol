#include <iostream>
using namespace std;

int x, y;

int gcd(int i, int j) {
  if (i < j) return gcd(j, i);
  if (j == 0) return i;
  return gcd(j, i%j);
}

int main() {
  cin >> x >> y;
  cout << gcd(x, y) << endl;
}