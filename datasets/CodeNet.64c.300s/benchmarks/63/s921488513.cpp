#include <iostream>
using namespace std;

int main() {
  int a, b, c, d, tmp;
  int gcd, lcm;
  while(cin >> a >> b) {
    c = a;
    d = b;
    while(true) {
      if(c == d) break;

      if(c > d) {
        tmp = c;
        c = d;
        d = tmp;
      }

      d -= c;
    }
    gcd = c;
    lcm = (a/gcd) * b;
    cout << gcd << " " << lcm << endl;
  }

  return 0;
}