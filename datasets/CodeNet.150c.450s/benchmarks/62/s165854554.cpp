#include <iostream>
using namespace std;
int main() {
  int x, y, z;
  cin >> x >> y >> z;
  int a;
  while (x>y || x>z) {
    a=x;
    x=y;
    y=z;
    z=a;
  }
  while (y>z) {
    a=y;
    y=z;
    z=a;
  }
  cout << x << " " << y << " " << z << endl;
}