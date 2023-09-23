#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
  int c;
  if (a >= b) {
    c = a % b;
    if (c == 0) return b;
    else return gcd(b, c);
  } else {
    c = b % a;
    if (c == 0) return a;
    else return gcd(a, c);
  }
}

int main(void) {
  int x, y;
  cin >> x >> y;
  cout << gcd(x, y) << endl;
  
  return 0;
}