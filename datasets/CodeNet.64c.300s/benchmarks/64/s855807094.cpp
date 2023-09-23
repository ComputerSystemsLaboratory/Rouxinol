#include <iostream>
#include <algorithm>
using namespace std;

int gcd(long int x,long int y) {
  if(y == 0) {
    return x;
  }
  else {
    return gcd(y,x%y);
  }
}

int main() {
  long int x,y;
  cin >> x >> y;

  cout << gcd(x,y) << endl;
  return 0;
}