#include <iostream>
using namespace std;

unsigned int GCD(unsigned int, unsigned int);

int main() {
  unsigned int a, b, gcd, lcm;
  while(cin >> a >> b) {
    gcd = GCD(a,b);
    lcm = a/gcd*b;
    cout << gcd << " " << lcm << endl;
  }
}

unsigned int GCD(unsigned int a, unsigned int b) {
  unsigned int c;
  do {
    if (a > b) {
      c = a %= b;
    } else {
      c = b %= a;
    }
  } while (c != 0);
  return a != 0 ? a : b;
}