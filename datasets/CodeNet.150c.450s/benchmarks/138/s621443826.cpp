
#include <iostream>

using namespace std;

int gcd (int a, int b) {
  return (b == 0) ? a : gcd(b, a%b);
}


int main() {
  int a, b;
  cin >> a >> b;
  
  if (a==b) {
    cout << a;
  } else {
    (a > b) ? cout << gcd(a,b) : cout << gcd(b,a);
  }
  cout << endl;
}

  