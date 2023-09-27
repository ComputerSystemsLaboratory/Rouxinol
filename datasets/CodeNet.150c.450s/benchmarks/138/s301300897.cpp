#include <iostream>
using namespace std;

int main (int argc, char **argv) {
  // data in
  long x, y;
  cin >> x >> y;
  
  // precondition x >= y
  long mod;
  if (x<y) {
    long t;
    t = x;
    x = y;
    y = t;
  }
  mod = x % y;

  while (mod>0) {
    x = y;
    y = mod;
    mod = x % y;
  }

  cout << y << endl;
}