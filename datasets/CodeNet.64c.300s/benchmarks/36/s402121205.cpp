#include <iostream>
using namespace std;

int main(){

 int x, y, z, t;

 cin >> x >> y >> z;

 if (x > y) {
  t = x;
  x = y;
  y = t;
 }

 if (y > z) {
  t = y;
  y = z;
  z = t;
 }

 if (x > y) {
  t = x;
  x = y;
  y = t;
 }

 cout << x << " " << y << " " << z << "\n";

 return 0;
}