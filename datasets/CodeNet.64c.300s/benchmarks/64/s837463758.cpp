#include <iostream>
#include <vector>

using namespace std;

int gcd (int x, int y) {
  if (y == 0) {
    return x;
  }
  
  if (x > y) {
    return gcd (y, x%y);
  } else {
    return gcd (x, y%x);
  }
}

int main(int argc, char* argv[]) {
  int x, y; cin >> x >> y;

  cout << gcd(x, y) << endl;
  return 0;
}