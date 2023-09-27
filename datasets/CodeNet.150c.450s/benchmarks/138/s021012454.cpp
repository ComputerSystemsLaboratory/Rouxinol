#include <iostream>
using namespace std;

int gcd(int, int);

int main(void) {

  int a, b, c;

  cin >> a >> b;

  c = gcd(a, b);

  cout << c << endl;

  return 0;

}

int gcd(int x, int y) {

  int a;

  if(x < y) {

    a = x;
    x = y;
    y = a;

  }

  while(y > 0) {

    a = x % y;
    x = y;
    y = a;

  }

  return x;

}